#ifndef __TRIDENTTD_EASYRTOS_A9G_H__
#define __TRIDENTTD_EASYRTOS_A9G_H__

#include "TridentTD_A9G.h"
#include "cs_types.h"


#ifndef TridentOS 
#define TridentOS   EasyRTOS_A9G
#endif

#ifndef EasyTask 
#define EasyTask   EasyRTOS_A9G
#endif

#ifndef DELAY
#define DELAY(ms)            OS_Sleep(ms)
#endif

// #ifndef VOID
// #define VOID
// #endif

#ifndef SETUP
#define SETUP()
#endif

#ifndef LOOP
#define LOOP()              for(;;)
#endif


#ifndef _PRIORITY_
#define _PRIORITY_
#define PRIO_1      1
#define PRIO_2      2
#define PRIO_3      3
#define PRIO_4      4
#define PRIO_5      5
#define PRIO_6      6
#define PRIO_7      7
#define PRIO_8      7
#define PRIO_9      9
#define PRIO_10     10
#endif

typedef void (*TaskFunction_t)( void * );

class EasyRTOS_A9G {
public:
  EasyRTOS_A9G()    { }
  EasyRTOS_A9G(const uint32_t StackDepth,uint8_t priority = PRIO_5) : _priority(priority), _StackDepth(StackDepth) {  }
  ~EasyRTOS_A9G();

  void start( TaskFunction_t fn, void * const arg=NULL, const uint32_t StackDepth=0);
  void stop();
  void resume();

  // EasyRTOS_A9G* ptr = const_cast<EasyRTOS_A9G*>(this);
private:
  HANDLE    _task_handler;
  uint8_t   _priority;
  uint32_t  _StackDepth;
};

#endif // __TRIDENTTD_EASYRTOS_A9G_H__