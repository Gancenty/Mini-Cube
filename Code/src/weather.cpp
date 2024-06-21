#include "weather.h"
#include <ArduinoJson.h>
#include <ESP8266WiFi.h>
#include <stdio.h>
#define WEATHER_API "api.seniverse.com" // 将要连接的服务器地址
#define WEATHER_API_PORT 80             // 将要连接的服务器端口

// 心知天气HTTP请求所需信息
String reqUserKey = "S0u-8VQ7vWGcXDVf2"; // 私钥
String reqLocation = "Hengchun";         // 城市
String reqUnit = "c";

String city_name;
String weather_day_info[3];
String weather_night_info[3];
String weather_temperature[3];
String weather_humidity[3];
String weather_date_now[3];
String weather_wind_info[3];
String weather_wind_scale[3];
int8_t weather_code[2][3];
String last_update;

void setup_weather(void)
{
  weather_httpRequest();
}
void weather_httpRequest(void)
{
  WiFiClient client;
  client.setTimeout(100);
  String reqRes = "/v3/weather/daily.json?key=" + reqUserKey +
                  +"&location=ip" + "&language=zh-Hans&unit=" +
                  reqUnit + "&start=0&days=3";
  // 建立http请求信息
  String httpRequest = String("GET ") + reqRes + " HTTP/1.1\r\n" +
                       "Host: " + WEATHER_API + "\r\n" +
                       "Connection: close\r\n\r\n";
  Serial.println("");
  Serial.print("Connecting to ");
  Serial.print(WEATHER_API);

  // 尝试连接服务器
  if (client.connect(WEATHER_API, WEATHER_API_PORT))
  {
    Serial.println(" Success!");

    // 向服务器发送http请求信息
    client.print(httpRequest);
    Serial.println("Sending request: ");
    Serial.println(httpRequest);

    // 获取并显示服务器响应状态行
    String status_response = client.readStringUntil('\n');
    Serial.print("status_response: ");
    Serial.println(status_response);

    // 使用find跳过HTTP响应头
    if (client.find("\r\n\r\n"))
    {
      Serial.println("Found Header End. Start Parsing.");
    }

    // 利用ArduinoJson库解析心知天气响应信息
    weather_parseInfo(client);
  }
  else
  {
    Serial.println(" connection failed!");
  }
  // 断开客户端与服务器连接工作
  client.stop();
}
char jsonString[2048];
bool weather_parseInfo(WiFiClient client)
{
  String clientString = client.readString();
  Serial.println(clientString);
  strcpy(jsonString, clientString.c_str());
  char *input = jsonString;

  StaticJsonDocument<1024> doc;

  DeserializationError error = deserializeJson(doc, input);

  if (error)
  {
    Serial.print(F("deserializeJson() failed: "));
    Serial.println(error.f_str());
    return false;
  }

  JsonObject results_0 = doc["results"][0];

  JsonObject results_0_location = results_0["location"];
  const char *results_0_location_id = results_0_location["id"];                           // "WT47HJP3HEMP"
  const char *results_0_location_name = results_0_location["name"];                       // "南昌"
  const char *results_0_location_country = results_0_location["country"];                 // "CN"
  const char *results_0_location_path = results_0_location["path"];                       // "南昌,南昌,江西,中国"
  const char *results_0_location_timezone = results_0_location["timezone"];               // "Asia/Shanghai"
  const char *results_0_location_timezone_offset = results_0_location["timezone_offset"]; // "+08:00"
  city_name = results_0_location_name;
  uint8_t i = 0;
  for (JsonObject results_0_daily_item : results_0["daily"].as<JsonArray>())
  {

    const char *results_0_daily_item_date = results_0_daily_item["date"];                     // "2023-05-29", "2023-05-30", ...
    const char *results_0_daily_item_text_day = results_0_daily_item["text_day"];             // "晴", "晴", "晴"
    const char *results_0_daily_item_code_day = results_0_daily_item["code_day"];             // "0", "0", "0"
    const char *results_0_daily_item_text_night = results_0_daily_item["text_night"];         // "晴", "晴", "晴"
    const char *results_0_daily_item_code_night = results_0_daily_item["code_night"];         // "1", "1", "1"
    const char *results_0_daily_item_high = results_0_daily_item["high"];                     // "36", "34", "33"
    const char *results_0_daily_item_low = results_0_daily_item["low"];                       // "27", "25", "26"
    const char *results_0_daily_item_rainfall = results_0_daily_item["rainfall"];             // "0.00", "0.00", "0.00"
    const char *results_0_daily_item_precip = results_0_daily_item["precip"];                 // "0.00", "0.00", "0.00"
    const char *results_0_daily_item_wind_direction = results_0_daily_item["wind_direction"]; // "东", "北", ...
    const char *results_0_daily_item_wind_direction_degree = results_0_daily_item["wind_direction_degree"];
    const char *results_0_daily_item_wind_speed = results_0_daily_item["wind_speed"]; // "23.4", "23.4", ...
    const char *results_0_daily_item_wind_scale = results_0_daily_item["wind_scale"]; // "4", "4", "3"
    const char *results_0_daily_item_humidity = results_0_daily_item["humidity"];     // "77", "82", "79"

    weather_temperature[i] = results_0_daily_item_low;
    weather_temperature[i] += "-";
    weather_temperature[i] += results_0_daily_item_high;

    weather_humidity[i] = results_0_daily_item_humidity;
    weather_humidity[i] += "%";

    weather_day_info[i] = results_0_daily_item_text_day;
    weather_night_info[i] = results_0_daily_item_text_night;

    weather_code[0][i] = std::__cxx11::stoi(results_0_daily_item_code_day);
    weather_code[1][i] = std::__cxx11::stoi(results_0_daily_item_code_night);

    weather_date_now[i] = results_0_daily_item_date;

    weather_wind_info[i] = results_0_daily_item_wind_direction;
    weather_wind_info[i] += "风";

    weather_wind_scale[i] = results_0_daily_item_wind_scale;
    weather_wind_scale[i] += "级";
    i++;
  }

  const char *results_0_last_update = results_0["last_update"]; // "2023-05-29T08:00:00+08:00"
  last_update = results_0_last_update;
  return true;
}