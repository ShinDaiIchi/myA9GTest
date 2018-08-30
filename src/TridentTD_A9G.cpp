#include "TridentTD_A9G.h"
#include "TridentTD_EasyRTOS_A9G.h"

void TridentTD_Main(void){
    setup();
    while(1){
        loop();
    }
}


void delay(unsigned long ms) {
  OS_Sleep(ms);
}
