#include "AgriArenaClient.h"
#include "WifiConfiguration.h"
#include "Sensors.h"
// #include "RGB_LED.cpp"


#define SWITCH 5
#define DHT_PIN 4
#define DHT_TYPE DHT11
#define SOIL_MOISTURE_PIN 32

const String SSID = "BABU";
const String PASSWORD = "BABUMANU@02";
const String ENDPOINT = "http://192.168.29.208:3000/api/iot";
const char *TLS_CERTIFICATE = R"KEY(

)KEY";


const uint8_t R = 15;
// const uint8_t G = 14;
// const uint8_t B = 13;

// uint8_t LED[3] = {15, 14, 13};

