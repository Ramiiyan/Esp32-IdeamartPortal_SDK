#define TINY_GSM_MODEM_SIM7000
#include <Arduino.h>
#include <PubSubClient.h>
#include <TinyGsmClient.h>

// change these topics and mqtt details with your Ideamart developer portal.

//  Examples for Topic...
//  #define SUB_TOPIC       "+/2951212455078424/testing/tester/v1/sub"
//  #define RES_TOPIC       "/2951212455078424/testing/tester/v1/sub"
//  #define PUB_TOPIC       "testing/tester/v1/common"

//  Examples for Mqtt username, password
//  #define MQTT_USERNAME   "testing-tester-v1_9876"
//  #define MQTT_PASSWORD   "108644667_9876"

// Replace the XXXX with your developer credentials 2952727675078424
#define SUB_TOPIC           "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" //Subscription Topic
#define RES_TOPIC           "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"   //Subscription Respose Topic
#define PUB_TOPIC           "XXXXXXXXXXXXXXXXXX"                 //Publishing Topic

#define MQTT_USERNAME       "XXXXXXXXXXXXXXXXXXXXX"
#define MQTT_PASSWORD       "XXXXXXXXXXXXXXX"

// No need to change the mqtt host and port util you use Ideamart-IoT developer portal.
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
void CallBack(char *t, byte *payload, int l);
String getCPSI();
