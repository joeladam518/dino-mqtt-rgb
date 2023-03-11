#ifndef __RGB_DINO_APP_LOG_H__
#define __RGB_DINO_APP_LOG_H__

#include "config.h"
#include "globals.h"
#include <Arduino.h>
#include <ArduinoJson.h>
#include <mqtt_client.h>
#include "mqttEventProcessing.h"

#if defined(APP_DEBUG) && APP_DEBUG
void appLog();
void appLog(char *message);
void appLog(const char *message);
void appLog(const __FlashStringHelper *message);
void appLog(DeserializationError *error);
void appLog(esp_mqtt_event_handle_t event);
void appLog(SubscriptionAction_t *action);

#define APP_LOG(message) appLog(message)
#define APP_LOGF(format, ...) Serial.printf(format, ##__VA_ARGS__)
#define APP_LOG_DATA(data) appLog(data)
#else
#define APP_LOG(message)
#define APP_LOGF(format, ...)
#define APP_LOG_DATA(data)
#endif

#if defined(APP_DEBUG) && APP_DEBUG && defined(APP_MQTT_DEBUG) && APP_MQTT_DEBUG
#define MQTT_EVENT_LOG(message) appLog(message)
#define MQTT_EVENT_LOGF(format, ...) Serial.printf(format, ##__VA_ARGS__)
#else
#define MQTT_EVENT_LOG(message)
#define MQTT_EVENT_LOGF(format, ...)
#endif

#endif
