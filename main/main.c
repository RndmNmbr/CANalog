#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char *TAG = "main";

void main_task(void *pvParameter) {
    ESP_LOGI(TAG, "Main task started.");
    int i = 0;
    while (1) {
        ESP_LOGI(TAG, "Hello from main task! Count: %d", i++);
        vTaskDelay(pdMS_TO_TICKS(5000)); // Delay for 5 seconds
    }
}

void app_main(void) {
    ESP_LOGI(TAG, "Application Startup");
    ESP_LOGI(TAG, "ESP-IDF version: %s", esp_get_idf_version());

    // Create the main task
    xTaskCreate(&main_task, "main_task", 4096, NULL, 5, NULL);

    ESP_LOGI(TAG, "Main task created.");
}
