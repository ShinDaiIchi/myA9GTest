#ifndef __TRIDENTTD_A9G_H__
#define __TRIDENTTD_A9G_H__

#include "TridentTD_EasyRTOS_A9G.h"


#include "cs_types.h"
#include "stdbool.h"
#include "stdint.h"
#include "stdio.h"
#include "string.h"

#include "api_audio.h"
#include "api_call.h"
#include "api_charset.h"
#include "api_debug.h"
#include "api_fota.h"
#include "api_fs.h"
#include "api_gizwits.h"
#include "api_gps.h"
#include "api_hal_adc.h"
#include "api_hal_gpio.h"
#include "api_hal_i2c.h"
#include "api_hal_pm.h"
#include "api_hal_spi.h"
#include "api_hal_uart.h"
#include "api_hal_watchdog.h"
#include "api_info.h"
#include "api_key.h"
#include "api_lbs.h"
#include "api_mqtt.h"
#include "api_network.h"
#include "api_os.h"
#include "api_sim.h"
#include "api_sms.h"
#include "api_socket.h"
#include "api_ss.h"
#include "api_ssl.h"
#include "api_sys.h"
#include "sdk_init.h"
#include "api_event.h"




#define lowByte(w) ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))

#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))


typedef uint16_t word;

#define bit(b) (1UL << (b))
#define _BV(b) (1UL << (b))

typedef uint8_t boolean;
typedef uint8_t byte;


void delay(unsigned long);


void TridentTD_Main(void);
void setup(void);
void loop(void);


#ifdef __cplusplus
// #include <algorithm>
#include "WString.h"

// using std::min;
// using std::max;
// using std::isinf;
// using std::isnan;

#define _min(a,b) ((a)<(b)?(a):(b))
#define _max(a,b) ((a)>(b)?(a):(b))

uint16_t makeWord(uint16_t w);
uint16_t makeWord(byte h, byte l);

#define word(...) makeWord(__VA_ARGS__)

// WMath prototypes
long random(long);
long random(long, long);
void randomSeed(unsigned long);
long map(long, long, long, long, long);

#include "pins_arduino.h"

#endif //__cplusplus


#endif //__TRIDENTTD_A9G_H__