# CANalog
CAN bus logger based on ESP32

## Project Setup

This project uses the ESP-IDF (Espressif IoT Development Framework).

### Prerequisites

1.  **Install ESP-IDF:** Follow the official Espressif documentation to install the ESP-IDF: [https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html)
    *   Make sure to install the necessary tools and set up the IDF_PATH environment variable.
    *   The CI uses ESP-IDF version v5.1.2. It's recommended to use a compatible version.

2.  **Target Chip:** This project is configured for the ESP32-S3.

### Building the Project

1.  **Clone the repository:**
    ```bash
    git clone <your-repository-url>
    cd <your-repository-directory>
    ```

2.  **Set the target (if not already set or different from default):**
    ```bash
    idf.py set-target esp32s3
    ```

3.  **Configure the project (optional):**
    You can use `idf.py menuconfig` to customize project settings, like Wi-Fi credentials, component settings, etc.
    ```bash
    idf.py menuconfig
    ```

4.  **Build the project:**
    ```bash
    idf.py build
    ```

### Flashing the Project

1.  **Connect your ESP32-S3 board.**
2.  **Flash the firmware:**
    ```bash
    idf.py -p /dev/ttyUSB0 flash monitor
    ```
    (Replace `/dev/ttyUSB0` with the correct serial port for your device.)

## CI Status

A GitHub Actions CI workflow is set up to automatically build the project on every push and pull request to the main branches.
