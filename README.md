#   ESP8266-Based Smart Temperature and Humidity Monitoring System with KiwisIoT

## 📌 Project Overview

The **Smart Temperature and Humidity Monitoring System** is an IoT-based project developed using the ESP8266 Wi-Fi module and DHT11 temperature and humidity sensor. The system continuously measures the surrounding temperature and humidity levels and transmits the collected sensor data to the **KiwisIoT cloud dashboard** through a Wi-Fi connection.

The monitored values can be viewed in real time through the IoT dashboard, enabling remote environmental monitoring and data visualization.

## 🎯 Objectives

- To monitor real-time temperature and humidity levels.
- To interface the DHT11 sensor with the ESP8266.
- To transmit sensor readings through Wi-Fi connectivity.
- To display temperature and humidity data on the KiwisIoT dashboard.
- To understand IoT-based wireless monitoring and cloud communication.

## 🛠️ Components Required

- ESP8266 NodeMCU
- DHT11 Temperature and Humidity Sensor
- Breadboard
- Jumper Wires
- USB Cable
- Wi-Fi Connection

## 💻 Software Requirements

- Arduino IDE
- ESP8266 Board Package
- DHT Sensor Library
- KiwisIoT Library
- KiwisIoT Cloud Platform

## ⚙️ Working Principle

1. The ESP8266 connects to the Wi-Fi network using the configured credentials.
2. The DHT11 sensor measures the surrounding temperature and humidity.
3. The ESP8266 reads the sensor values through digital pin D2.
4. The KiwisIoT library establishes communication with the IoT platform.
5. Temperature readings are transmitted to Channel 0.

## 📂 Source Code

The complete Arduino source code for this project is available below:

[ESP8266_Temperature_Humidity_Monitoring.ino](ESP8266_Temperature_Humidity_Monitoring.ino)

## 📸 Project Output

![KiwisIoT Temperature and Humidity Monitoring Output](KIWISIOT%20OUTPUT%20for%20TEMPERATURE%20AND%20HUMIDITY.jpeg)


## 📊 Data Monitoring

The system monitors two environmental parameters:

| Parameter | Description | IoT Channel |
|---|---|---|
| Temperature | Measures surrounding temperature in °C | Channel 0 |
| Humidity | Measures relative humidity in % | Channel 1 |

## 🚀 Applications

- Smart Home Environmental Monitoring
- Indoor Temperature Monitoring
- Weather Monitoring Systems
- Smart Agriculture
- IoT-Based Environmental Data Collection
- Remote Temperature and Humidity Monitoring

## 🌟 Key Features

- Real-time temperature monitoring.
- Real-time humidity measurement.
- Wi-Fi-based wireless communication.
- Cloud-based data visualization using KiwisIoT.
- Remote environmental monitoring.
- Simple and cost-effective IoT implementation.

## 🔮 Future Enhancements

- Integration of additional environmental sensors.
- Historical data storage and analysis.
- Mobile-based monitoring and notifications.
-
