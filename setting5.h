//Ajust the following:

uint8_t ResetConfig =         1;     //Change this value to reset current config on the next boot...
#define DEFAULTHOSTNAME       "ESP8266"
// NO PASSWORD means NO WiFi in code
#define DEFAULTWIFIPASS       "defaultPassword"
#define WIFISTADELAYRETRY     30000L
#define WIFIAPDELAYRETRY      300000L
#define MEMORYLEAKS           10000L
#define MAXWIFIRETRY          2
#define SSIDCount()           3
// Restore output values after a reboot:
#define RESTO_VALUES_ON_BOOT  false
#define REVERSE_OUTPUT        true
#define inputCount()          3
#define outputCount(n)        (n)
#define physPins              5
#define virtPins              5
//String  outputName[outputCount()] = {"Yellow", "Orange", "Red", "Green", "Blue", "White"}; //can be change by interface...
//uint8_t _outputPin[outputCount()] = {  D0,       D1,      D2,      D3,     D4,      D8  };
static String  outputName[outputCount(physPins+virtPins)]={"Yellow", "Green", "Orange", "Red", "Blue", "serial1", "serial2", "serial3", "serial4", "serial5" }; //can be change by interface...
static uint8_t _outputPin[outputCount(physPins)]         ={  D1,       D2,      D3,      D4,     D0  };
static uint8_t _inputPin [inputCount()]                  ={  D5,       D6,      D7  };

#define DISABLESWITCHTIMEOUT 3000
//#define NOTIFPROXY "domogateway"
//#define NOTIFPort 8080

#define DEBUG
