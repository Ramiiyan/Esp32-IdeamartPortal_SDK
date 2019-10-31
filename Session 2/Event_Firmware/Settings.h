#define TINY_GSM_MODEM_SIM7000
#include <Arduino.h>
#include <PubSubClient.h>
#include <TinyGsmClient.h>

// change these topics and mqtt details with your Ideamart developer portal.

//Examples....
//  #define PUB_TOPIC       "testing/tester/v1/common"
//  #define MQTT_USERNAME   "testing-tester-v1_9876"
//  #define MQTT_PASSWORD   "108644667_9876"

// Replace the XXXX with your developer credentials
#define PUB_TOPIC           "XXXXXXXXXXXXXXXXXXXXXXXXX"                 //Publishing Topic

#define MQTT_USERNAME       "XXXXXXXXXXXXXXXXXXXX"
#define MQTT_PASSWORD       "XXXXXXXXXXXXXX"

#define MQTT_HOST           "mqtt.iot.ideamart.io" 
#define MQTT_PORT           1883

#define ideaBoard_PWRKEY    13
#define ideaBoard_RX        8
#define ideaBoard_TX        7
#define ideaBoard_RST       11
#define GSM_APN             "dialogbb"
#define NB_APN              "nbiot"

HardwareSerial SerialSIM(2);
TinyGsm modem(SerialSIM);
TinyGsmClient client(modem);
PubSubClient mqtt(client);


boolean ConnectToMQTT();
void sendVal(int val);
String getCPSI();
