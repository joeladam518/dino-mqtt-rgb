#ifndef __RGB_DINO_CONFIG_EXAMPLE_H__
#define __RGB_DINO_CONFIG_EXAMPLE_H__

#include <soc/soc.h>

// Debug
#define DEBUG         false // This will trigger other library's debug functionality
#define APP_DEBUG     false

// Wifi
#define WLAN_SSID     ""
#define WLAN_PASS     ""
#define WIFI_SECURE   false

// MQTT
#define MQTT_BROKER   ""
#define MQTT_PORT     1883  // ssl
#define MQTT_USER     ""
#define MQTT_PASS     ""

// Subscription Topics
#define SUB_GET_COLOR ""
#define SUB_SET_COLOR ""

// Publish Topics
#define PUB_GET_COLOR ""

// Pins
#define NEO_PIXEL_PIN   14
#define NEO_PIXEL_COUNT 12

// Mqtt overrides
// #define MQTT_CORE_SELECTION_ENABLED
// #define MQTT_TASK_CORE PRO_CPU_NUM

#endif
