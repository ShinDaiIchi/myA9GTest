#include "TridentTD_A9G.h"

void TaskFunc01(void *)
{
    int i;
    SETUP() {
        i = 10000;
    }

    LOOP() {
        String mystr = "[Task1] Hello  A9G AI-Thinker : " + String(i++);
        Trace(1, mystr.c_str());
        DELAY(1000);
    }
}

