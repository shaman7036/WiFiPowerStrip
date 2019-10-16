//Ajust the following:

uint8_t ResetConfig =         3;     //Change this value to reset current config on the next boot...
#define DEFAULTHOSTNAME      "ESP8266"
//NO DEFAULTWIFIPASS means NO WiFi in code ->Slave candidate (no SSID defined will also qualify the slave candidate type).
#define DEFAULTWIFIPASS      "defaultPassword"
#define WIFISTADELAYRETRY     30000L
#define MAXWIFIRETRY          2
#define WIFIAPDELAYRETRY      300000L
//#define MEMORYLEAKS           10000L
#define SSIDCount()           3
#define RESTO_VALUES_ON_BOOT  false
#define REVERSE_OUTPUT        false
#define DISABLESWITCHTIMEOUT  3000L
//static std::vector<ushort>   _inputPin ={ D5, D6, D7 };                         //lumibloc
//static std::vector<ushort>   _outputPin={ D1, D2, D3, D4, D0, D8 };
static std::vector<ushort>   _inputPin ={ D5, D6, D7 };                           //relay 6x
static std::vector<ushort>   _outputPin={ D8, D1, D2, D3, D4, D0 };
//static std::vector<ushort>   _outputPin={ D8, D1, D2, D3, D4, D0, (ushort)-1 }; //with a virtual output...
//static std::vector<ushort>   _inputPin ={ 2 };                                  //ESP-01S relay 1x
//static std::vector<ushort>   _outputPin={ 0 };

#define DEFAULT_MQTT_SERVER  "mosquitto.home.lan"
#ifdef  DEFAULT_MQTT_SERVER
  #define DEFAULT_MQTT_PORT   1883
  #define DEFAULT_MQTT_IDENT ""
  #define DEFAULT_MQTT_USER  ""
  #define DEFAULT_MQTT_PWD   ""
  #define DEFAULT_MQTT_QUEUE "domoticz/in"
#else
  #define NOTIFYPROXY        "domoticz.home.lan"
  #define NOTIFYPORT          8081
#endif

#define DEBUG
