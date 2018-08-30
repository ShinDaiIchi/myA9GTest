#include "TridentTD_A9G.h"

void TaskFunc02(void *)
{
    uint16_t value = 0, mV = 0;
    
    SETUP(){
        ADC_Config_t config;
        config.channel = ADC_CHANNEL_0;
        config.samplePeriod = ADC_SAMPLE_PERIOD_100MS;
        ADC_Init(config);
    }
    
    LOOP() {
        if(ADC_Read(ADC_CHANNEL_0, &value, &mV))
            Trace(1,"[Task2] ADC value:%d, %dmV",value,mV);
        DELAY(3000);
    }
}
