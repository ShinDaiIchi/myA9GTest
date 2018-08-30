#include "TridentTD_A9G.h"

void TaskFunc03(void *)
{
    SETUP(){
        randomSeed(232);
    }
    
    LOOP() {
        String mytext = "[Task3] Hello World : " + String(random(1000));
        Trace(1, mytext.c_str());
        DELAY(2000);
    }
}
