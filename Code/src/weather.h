#ifndef _WEATHER_H
#define _WEATHER_H
#include <ESP8266WiFi.h>
#include "./xbm/wifigif.h"
#include "./xbm/cloudy.h"//阴天 晴晚间多云 晴晚间大部多云
#include "./xbm/sunny.h"//晴天（白天晚上）
#include "./xbm/heavyrain.h"//大雨 暴雨 大暴雨 特大暴雨 
#include "./xbm/shower.h"//阵雨
#include "./xbm/lightrain.h"//小雨 中雨
#include "./xbm/thunderrain.h"//雷阵雨 雷阵雨带有冰雹
#include "./xbm/lightsnow.h"//冻雨 雨夹雪 阵雪 小雪 中雪
#include "./xbm/heavysnow.h"//大雪 暴雪
#include "./xbm/windy.h"//风 大风 飓风 热带风暴 龙卷风
#include "./xbm/nightfog.h"//浮尘 扬沙 沙尘暴 强沙尘暴 雾 霾
#include "./xbm/dayhaze.h"//同上
#include "./xbm/puzzled.h"
#include "./xbm/Synchronize.h"
#include "./xbm/energy.h"
#include "./xbm/heart.h"
#include "./xbm/wifi_code.h"
extern String city_name;
extern String weather_wind_info[3];
extern String weather_wind_scale[3];
extern String weather_temperature[3];
extern String weather_humidity[3];
extern String weather_day_info[3];
extern String weather_night_info[3];
extern String weather_date_now[3];
extern int8_t weather_code[2][3];
void setup_weather(void);
void weather_httpRequest(void);
void weather_parseInfo(WiFiClient client);

#endif
