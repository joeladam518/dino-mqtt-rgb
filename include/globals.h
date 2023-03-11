#ifndef __RGB_DINO_GLOBALS_H__
#define __RGB_DINO_GLOBALS_H__

#include "config.h"

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/semphr.h>
#include <freertos/queue.h>
#include <mqtt_client.h>

#include "neoPixelRing.h"

// Adafruit NeoPixels
extern NeoPixelRing ring;

// freertos variables
extern TaskHandle_t mqttMTaskHandle;
extern TaskHandle_t processShortTaskHandle;
extern TaskHandle_t processLongTaskHandle;
extern QueueHandle_t shortActionQueue;
extern QueueHandle_t longActionQueue;
extern SemaphoreHandle_t ringMutex;

// Mqtt client
extern esp_mqtt_client_handle_t mqttClient;

#endif
