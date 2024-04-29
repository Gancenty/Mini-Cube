#include <Adafruit_NeoPixel.h>
#include <Arduino.h>
#include <U8g2lib.h>
#include <Ticker.h>
#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include "weather.h"
#include <WiFiManager.h>

char ssid[128] = "Mini-Cube";
char password[128] = "12345678";
uint8_t brightness = 2;
bool led_status = true;

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN 12 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 1 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define KEY_PIN 13

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "ntp.aliyun.com", 3600, 60000);
String time_data;
String date_now;

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE);
Ticker key_scan;
Ticker led_show;

uint8_t ui_mode = 0;
#define TIME_UI 0
#define DATE_UI 1
#define WEATHER_UI 2
#define WEATHER_INFO_UI 3
#define NET_UI 4
#define ABOUT_UI 5
#define MAX_UI_CNT 6

String project_name = "Mini-Cube";
String project_author = "Gancenty";
String project_date = "24-04-10";
String project_version = "1.0.1";

const char *week[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
String  day_name[] = {"今天", "明天", "后天"};
//                              1  2  3  4  5  6  7  8  9 10 11 12
const uint8_t month_table[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const uint8_t week_table[]  = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};

uint8_t Is_Leap_Year(uint16_t _year)
{
  if (((_year % 4 == 0) && (_year % 100 != 0)) || ((_year % 400 == 0) && (_year % 100 == 0)))
    return 1;
  else
    return 0;
}
void xbm_refresh(void)
{
  uint8_t isday = timeClient.getHours() < 18 ? 0 : 1;
  uint8_t xpos = 0, ypos = 16;
  static uint8_t page = 0;
  for (uint8_t i = 0; i < 3; i++)
  {

    if (weather_code[isday][i] == 0 || weather_code[isday][i] == 1 || weather_code[isday][i] == 38)
    {
      u8g2.drawXBMP(xpos, ypos, 32, 32, sunny[page]);
    }
    if (weather_code[isday][i] == 4 || weather_code[isday][i] == 5 || weather_code[isday][i] == 6 || weather_code[isday][i] == 7 || weather_code[isday][i] == 8 || weather_code[isday][i] == 9)
    {
      u8g2.drawXBMP(xpos, ypos, 32, 32, cloudy[page]);
    }
    if (weather_code[isday][i] == 10)
    {
      u8g2.drawXBMP(xpos, ypos, 32, 32, shower[page]);
    }
    if (weather_code[isday][i] == 11 || weather_code[isday][i] == 12)
    {
      u8g2.drawXBMP(xpos, ypos, 32, 32, thunderrain[page]);
    }
    if (weather_code[isday][i] == 13 || weather_code[isday][i] == 14)
    {
      u8g2.drawXBMP(xpos, ypos, 32, 32, lightrain[page]);
    }
    if (weather_code[isday][i] == 15 || weather_code[isday][i] == 16 || weather_code[isday][i] == 17 || weather_code[isday][i] == 18)
    {
      u8g2.drawXBMP(xpos, ypos, 32, 32, heavyrain[page]);
    }
    if (weather_code[isday][i] == 19 || weather_code[isday][i] == 20 || weather_code[isday][i] == 21 || weather_code[isday][i] == 22 || weather_code[isday][i] == 23)
    {
      u8g2.drawXBMP(xpos, ypos, 32, 32, lightsnow[page]);
    }
    if (weather_code[isday][i] == 24 || weather_code[isday][i] == 25 || weather_code[isday][i] == 37)
    {
      u8g2.drawXBMP(xpos, ypos, 32, 32, heavysnow[page]);
    }
    if (weather_code[isday][i] == 26 || weather_code[isday][i] == 27 || weather_code[isday][i] == 28 || weather_code[isday][i] == 29 || weather_code[isday][i] == 30 || weather_code[isday][i] == 31)
    {
      if (isday == 1)
      {
        u8g2.drawXBMP(xpos, ypos, 32, 32, nightfog[page]);
      }
      else
      {
        u8g2.drawXBMP(xpos, ypos, 32, 32, dayhaze[page]);
      }
    }
    if (weather_code[isday][i] == 32 || weather_code[isday][i] == 33 || weather_code[isday][i] == 34 || weather_code[isday][i] == 35 || weather_code[isday][i] == 36)
    {
      u8g2.drawXBMP(xpos, ypos, 32, 32, windy[page]);
    }
    u8g2.setFont(u8g2_font_wqy12_t_gb2312);
    u8g2.drawStr(2 + i * (32 + 16), 60, weather_temperature[i].c_str());
    u8g2.drawUTF8(5 + i * (32 + 16), 14, day_name[i].c_str());
    xpos += 32 + 16;
  }
  page = (page + 1) % 28;
}
void setup_date(void)
{
  static u16 daycount = 0;
  u32 daynum;
  u32 temp = 0;
  u32 timecount = timeClient.getEpochTime();
  daynum = timecount / 86400;
  // Calendar year
  if (daycount != daynum) //>1
  {
    daycount = daynum;
    temp = 1970;
    while (daynum > 365)
    {
      if (Is_Leap_Year(temp))
      {
        if (daynum >= 366)
          daynum = daynum - 366;
        else
          break;
      }
      else
        daynum = daynum - 365;
      temp++;
    }
    date_now = temp; // set year
    u16 year = temp;
    temp = 0; // reset temp

    // Calendar month
    while (daynum >= 28)
    {
      if (Is_Leap_Year(year) && temp == 1)
      {
        if (daynum >= 29)
          daynum = daynum - 29;
        else
          break;
      }
      else
      {
        if (daynum >= month_table[temp])
          daynum = daynum - month_table[temp];
        else
          break;
      }
      temp++;
    }
    date_now += '-';
    if (temp + 1 < 10)
    {
      date_now += '0';
    }
    date_now += temp + 1; // set month
    date_now += '-';
    if (daynum + 1 < 10)
    {
      date_now += '0';
    }
    date_now += daynum + 1; // set day
  }
}
void rainbow_show(void)
{
  static uint8_t mode = 0;
  static uint8_t dir = 0;
  static uint8_t r = 255, g = 0, b = 0;
  if(WiFi.isConnected()){
    if(mode == 0){
      switch (dir)
      {
        case 0:g++;if (g == 255){dir = 1;} break;
        case 1:r--;if (r == 0){dir = 2;}break;
        case 2:b++;if (b == 255){dir = 3;}break;
        case 3:g--;if (g == 0){dir = 4;}break;
        case 4:r++;if (r == 150){mode = 1;dir = 0;}break;
        default:break;
      }
    }else{
      switch (dir)
      {
        case 0:r--;if (r == 0){dir = 1;} break;
        case 1:g++;if (g == 255){dir = 2;}break;
        case 2:b--;if (b == 0){dir = 3;}break;
        case 3:r++;if (r == 255){dir = 4;}break;
        case 4:g--;if (g == 0){mode = 0;dir = 0;}break;
        default:break;
      }
    }
    pixels.setPixelColor(0,pixels.Color(r,g,b));
    pixels.show();
  }else{
    pixels.setPixelColor(0, pixels.Color(255, 0, 0));
    pixels.show();
  }
}
void duty_1ms(void)
{
  if(led_status){
    rainbow_show();
  }
}
void duty_20ms(void)
{
  static uint8_t high_cnt = 0;
  static uint8_t long_pressed = 0;
  uint8_t sta = digitalRead(KEY_PIN);
  if (sta == HIGH)
  {
    high_cnt++;
    if (high_cnt > 50)
    {
      long_pressed = 1;
      high_cnt = 0;
      if(ui_mode==ABOUT_UI){
        WiFi.persistent(true);
        WiFi.disconnect(true);
        WiFi.persistent(false);
        ESP.restart();
      }else if(ui_mode==NET_UI){
        led_status=!led_status;
        if(led_status==false){
          pixels.setPixelColor(0,pixels.Color(0,0,0));
          pixels.show();
        }  
      }else{
        brightness+=10;
        u8g2.setContrast(brightness%256);
        Serial.println("Long Pressed");
      }
    }
  }
  else
  {
    if (high_cnt > 3 && high_cnt < 25)
    {
      if(long_pressed == 0){
        ui_mode = (ui_mode + 1) % MAX_UI_CNT;
      }
    }
    if(long_pressed == 1){
      long_pressed = 0;
    }
    high_cnt = 0;
  }
}
void duty_500ms(void)
{
  static uint32_t lms = 0;
  if (millis() - lms >= 500)
  {
    lms = millis();

    setup_date();
  }
}
void duty_1s(void)
{
  static uint32_t lms = 0;
  if (millis() - lms >= 1 * 1000)
  {
    lms = millis();

    
  }
}
void duty_30s(void)
{
  static uint32_t lms = 0;
  if (millis() - lms >= 30 * 1000)
  {
    lms = millis();

    setup_weather();
    timeClient.update();
    setup_date();
  }
}

void time_ui(void)
{
  uint8_t str_width = 0;
  u8g2.clearBuffer();
  u8g2.setFontMode(0);
  u8g2.setDrawColor(1);
  u8g2.setFontPosBaseline();
  u8g2.setFont(u8g2_font_luBIS18_te);
  time_data = timeClient.getFormattedTime();
  str_width = u8g2.getStrWidth(time_data.c_str());
  u8g2.drawFrame(0, 0, 128, 64);
  u8g2.setCursor((128 - str_width) / 2, 40);
  u8g2.print(time_data);
  u8g2.sendBuffer();
}
void date_ui(void)
{
  static uint8_t pic_x = 60;
  static uint8_t dir = 0;
  u8g2.clearBuffer();
  u8g2.setFontPosBaseline();
  u8g2.setFontMode(0);
  u8g2.setDrawColor(1);
  u8g2.setFont(u8g2_font_tenstamps_mf);
  time_data = timeClient.getFormattedTime();
  u8g2.setCursor(5, 38 - 2 - 12 - 8);
  u8g2.print(date_now.substring(2));
  u8g2.setCursor(5, 38 - 2);
  u8g2.print(time_data);
  u8g2.setCursor(5, 38 - 2 + 8 + 12);
  u8g2.print(week[timeClient.getDay()]);
  u8g2.setFont(u8g2_font_iconquadpix_m_all);
  u8g2.drawGlyph(pic_x, 38 - 2 + 8 + 12 + 2, 0x63);
  if (pic_x >= 128 - 12 - 12)
  {
    dir = 1;
  }
  if (pic_x <= 60)
  {
    dir = 0;
  }
  if (dir)
  {
    pic_x--;
  }
  else
  {
    pic_x++;
  }
  u8g2.sendBuffer();
}
void weather_ui(void)
{
  u8g2.clearBuffer();
  u8g2.setFontPosBaseline();
  u8g2.setFontMode(0);
  u8g2.setDrawColor(1);
  u8g2.enableUTF8Print();
  xbm_refresh();
  u8g2.sendBuffer();
}
void weather_info_ui(void)
{
  uint8_t x_pos = 2;
  uint8_t str_width = 0;
  uint8_t isday = timeClient.getHours() < 18 ? 0 : 1;
  static uint8_t offset = 0;
  static uint8_t ls = 0;
  if (abs(timeClient.getSeconds() - ls) >= 2)
  {
    ls = timeClient.getSeconds();
    offset = (offset + 1) % 4; // 切换最后一行显示内容
  }
  u8g2.clearBuffer();
  u8g2.setFontPosTop();
  u8g2.setDrawColor(1);
  u8g2.setFont(u8g2_font_wqy12_t_gb2312);
  u8g2.enableUTF8Print();
  for (uint8_t i = 0; i < 3; i++)
  {
    str_width = u8g2.getUTF8Width(weather_date_now[i].substring(5).c_str());
    u8g2.drawUTF8(x_pos + (32 - str_width) / 2, 0, weather_date_now[i].substring(5).c_str());
    if (isday == 0)
    {
      str_width = u8g2.getUTF8Width(weather_day_info[i].c_str());
      u8g2.drawUTF8(x_pos + (32 - str_width) / 2, 17, weather_day_info[i].c_str());
    }
    else
    {
      str_width = u8g2.getUTF8Width(weather_night_info[i].c_str());
      u8g2.drawUTF8(x_pos + (32 - str_width) / 2, 17, weather_night_info[i].c_str());
    }
    str_width = u8g2.getUTF8Width(weather_temperature[i].c_str());
    u8g2.drawUTF8(x_pos + (32 - str_width) / 2, 34, weather_temperature[i].c_str());
    if (offset == 0)
    {
      str_width = u8g2.getUTF8Width(weather_humidity[i].c_str());
      u8g2.drawUTF8(x_pos + (32 - str_width) / 2, 51, weather_humidity[i].c_str());
    }
    else if (offset == 1)
    {
      str_width = u8g2.getUTF8Width(weather_wind_info[i].c_str());
      u8g2.drawUTF8(x_pos + (32 - str_width) / 2, 51, weather_wind_info[i].c_str());
    }
    else if (offset == 2)
    {
      str_width = u8g2.getUTF8Width(weather_wind_scale[i].c_str());
      u8g2.drawUTF8(x_pos + (32 - str_width) / 2, 51, weather_wind_scale[i].c_str());
    }
    else if (offset == 3)
    {
      str_width = u8g2.getUTF8Width(city_name.c_str());
      u8g2.drawUTF8(x_pos + (32 - str_width) / 2, 51, city_name.c_str());
    }
    x_pos += 32 + 14;
  }
  u8g2.sendBuffer();
}
void net_ui(void)
{
  bool wifi_connected = WiFi.isConnected();
  u8g2.clearBuffer();
  u8g2.setFontPosTop();
  u8g2.setDrawColor(1);
  u8g2.setFont(u8g2_font_profont15_mf);
  u8g2.setCursor(0, 0);
  String wifi_name = "SSID:" + (wifi_connected?WiFi.SSID():"None");
  u8g2.print(wifi_name);

  u8g2.setCursor(0, 16);
  String wifi_psk = "PSW:"+ (wifi_connected?WiFi.psk():"None");
  u8g2.print(wifi_psk);

  u8g2.setCursor(0, 32);
  String ip_info = "IP:"+ (wifi_connected?WiFi.localIP().toString():"None");
  u8g2.print(ip_info);

  u8g2.setCursor(0, 48);
  String weather_update_info = "Latest:"+ (wifi_connected?last_update.substring(0,last_update.indexOf('T')):"None");
  u8g2.print(weather_update_info);

  u8g2.sendBuffer();
}
void about_ui(void)
{
  static uint16_t offset = 0;
  static uint8_t ls = 0;
  if (timeClient.getSeconds() != ls)
  {
    ls = timeClient.getSeconds();
    offset++;
    if (offset >= 656)
    {
      offset = 0;
    }
  }
  u8g2.clearBuffer();
  u8g2.setFontPosTop();
  u8g2.setDrawColor(1);
  u8g2.setFont(u8g2_font_profont15_mf);

  u8g2.setCursor(0, 0);
  u8g2.print(F("Name:"));
  u8g2.print(project_name);

  u8g2.setCursor(0, 16);
  u8g2.print(F("Maker:"));
  u8g2.print(project_author);

  u8g2.setCursor(0, 32);
  u8g2.print(F("Date:"));
  u8g2.print(project_date);

  u8g2.setCursor(0, 48);
  u8g2.print(F("Bright:"));
  u8g2.print(brightness);

  u8g2.setFont(u8g2_font_streamline_all_t);
  u8g2.drawGlyph(105, 35, 0x30 + offset);
  u8g2.sendBuffer();
}

void logo_ui(void)
{
  u8g2.clearBuffer();
  u8g2.setFontMode(0);
  u8g2.setDrawColor(1);
  u8g2.setFont(u8g2_font_DigitalDisco_tf);
  u8g2.setFontPosBaseline();
  uint8_t width = u8g2.getStrWidth(project_name.c_str());
  u8g2.setCursor((128 - width) / 2, 35);
  u8g2.print(project_name);
  u8g2.sendBuffer();
}
void wifi_ui(void)
{
  static uint8_t dot_num = 0;
  u8g2.clearBuffer();
  u8g2.setFontMode(0);
  u8g2.setDrawColor(1);
  u8g2.setFontPosBaseline();
  u8g2.setFont(u8g2_font_DigitalDisco_tf);
  u8g2.setCursor(3, 35);
  u8g2.print("WiFi Connecting");
  for (uint8_t i = 0; i < dot_num; i++)
  {
    u8g2.print(".");
  }
  dot_num++;
  if (dot_num > 4)
  {
    dot_num = 0;
  }
  u8g2.sendBuffer();
}
void wifi_smart_config_ui(void)
{
  u8g2.clearBuffer();
  u8g2.setFontPosTop();
  u8g2.setFont(u8g2_font_wqy12_t_gb2312);
  u8g2.setFontMode(0);
  u8g2.setDrawColor(0);
  u8g2.drawXBMP(0, 0, 64, 64, wifi_url);
  u8g2.setDrawColor(1);
  u8g2.drawUTF8(64 + 3, 8, "1.连接WIFI");
  u8g2.drawUTF8(64 + 3, 8+12, "\"Mini-Cube\"");
  u8g2.drawUTF8(64 + 3, 36, "2.打开微信");
  u8g2.drawUTF8(64 + 3, 36+12, "扫描二维码");
  u8g2.sendBuffer();
}
bool AutoConfig()
{
  WiFi.begin();
  WiFi.mode(WIFI_STA);
  
  wifi_station_set_hostname(project_name.c_str());
  for (int i = 0; i < 60; i++)
  {
    int wstatus = WiFi.status();
    if (wstatus == WL_CONNECTED)
    {
      Serial.println("WIFI SmartConfig Success");
      Serial.printf("SSID:%s", WiFi.SSID().c_str());
      Serial.printf(", PSW:%s\r\n", WiFi.psk().c_str());
      Serial.print("LocalIP:");
      Serial.print(WiFi.localIP());
      Serial.print(" ,GateIP:");
      Serial.println(WiFi.gatewayIP());
      return true;
    }
    else
    {
      delay(500);
      wifi_ui();
    }
  }
  return false;
}

void SmartConfig() // 一键配网
{
  WiFi.mode(WIFI_STA);
  Serial.println("\r\nWait for Smartconfig...");
  wifi_smart_config_ui();
  WiFi.beginSmartConfig();
  while (1)
  {
    delay(250);
    if (WiFi.smartConfigDone())
    {
      Serial.println("WIFI SmartConfig Success");
      Serial.printf("SSID:%s", WiFi.SSID().c_str());
      Serial.printf(", PSW:%s\r\n", WiFi.psk().c_str());
      Serial.print("LocalIP:");
      Serial.print(WiFi.localIP());
      Serial.print(" ,GateIP:");
      Serial.println(WiFi.gatewayIP());
      break;
    }
  }
}

void setup()
{
  pinMode(KEY_PIN, INPUT);
  Serial.begin(115200);
  u8g2.setBusClock(400000);
  u8g2.begin();
  u8g2.setContrast(brightness);
  
  pixels.begin();
  pixels.setBrightness(2);
  delay(100);
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.show();
  
  logo_ui();

  delay(2000);
  wifi_smart_config_ui();
  WiFiManager wm;
  wm.setTimeout(180);
  bool res = wm.autoConnect("Mini-Cube");
  if(!res){
    ESP.restart();
  }
  // if (!AutoConfig())
  // {
  //   SmartConfig();
  // }
  pixels.setPixelColor(0, pixels.Color(0, 255, 0));
  pixels.show();

  timeClient.begin();
  timeClient.setTimeOffset(8 * 3600);
  while (!timeClient.update())
  {
    delay(500);
    timeClient.update();
  }
  setup_weather();
  key_scan.attach_ms(20, duty_20ms);
  led_show.attach_ms(1, duty_1ms);
}
void loop()
{
  duty_500ms();
  duty_30s();
  duty_1s();
  switch (ui_mode)
  {
  case TIME_UI:
    time_ui();
    break;
  case DATE_UI:
    date_ui();
    break;
  case WEATHER_UI:
    weather_ui();
    break;
  case WEATHER_INFO_UI:
    weather_info_ui();
    break;
  case NET_UI:
    net_ui();
    break;
  case ABOUT_UI:
    about_ui();
    break;
  default:
    break;
  }
}
