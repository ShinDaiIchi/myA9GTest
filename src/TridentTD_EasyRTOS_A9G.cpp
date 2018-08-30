#include "TridentTD_EasyRTOS_A9G.h"

#ifndef TASK_RESUME
#define TASK_RESUME(c)  OS_ResumeTask(c)
#endif
#ifndef TASK_STOP
#define TASK_STOP(c)    OS_SuspendTask(c)
#endif
#ifndef TASK_DELETE
#define TASK_DELETE(c)  OS_DeleteTask(c)
#endif


EasyRTOS_A9G::~EasyRTOS_A9G() {
  TASK_DELETE(_task_handler);
}

void EasyRTOS_A9G::stop()   { TASK_STOP(_task_handler);   }
void EasyRTOS_A9G::resume() { TASK_RESUME(_task_handler); }


void EasyRTOS_A9G::start( TaskFunction_t fn, void * const arg, const uint32_t StackDepth) {
  String task_name = String("RTOS_Task_")+ String(random(10000));
  if(_priority < PRIO_1) _priority = PRIO_1;
  _StackDepth = (StackDepth)? StackDepth : 2048,
  _task_handler = OS_CreateTask( fn, NULL, NULL, (StackDepth)? StackDepth : _StackDepth, _priority, 0, 0, (const uint8_t*)task_name.c_str());
}
