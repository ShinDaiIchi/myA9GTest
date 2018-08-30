#include "TridentTD_A9G.h"

TridentOS Task01, Task02, Task03;
void TaskFunc01(void *), TaskFunc02(void *),TaskFunc03(void *);

void setup(void){
    Task01.start(TaskFunc01);
    Task02.start(TaskFunc02);
    Task03.start(TaskFunc03);
}

void loop(){
    delay(1);
}











extern "C" void myA9GTest_Main(void)  { TridentTD_Main(); }

















// HANDLE mainTaskHandle = NULL;
// HANDLE secondTaskHandle = NULL;
// HANDLE thirdTaskHandle = NULL;
// #include "myA9G.h"

    // mainTaskHandle = OS_CreateTask(MainTask,
    //     NULL, NULL, MAIN_TASK_STACK_SIZE, MAIN_TASK_PRIORITY, 0, 0, (const uint8_t*)MAIN_TASK_NAME);

    // OS_SetUserMainHandle(&mainTaskHandle);
