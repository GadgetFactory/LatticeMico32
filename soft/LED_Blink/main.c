#include "MicoUtils.h"
#include "MicoGPIO.h"
#include "stdio.h"
#include "DDStructs.h"
#include "LookupServices.h"
#include "MicoFileDevices.h"


int main(void){
	unsigned char cnt = 0;
	int i;
	
	MicoGPIOCtx_t *leds = (MicoGPIOCtx_t *)MicoGetDevice("gpio");
	
	while(1){
		MICO_GPIO_WRITE_DATA(leds, 0xAA000000);
		MicoSleepMilliSecs(1000);
		
		MICO_GPIO_WRITE_DATA(leds, 0x55000000);
		MicoSleepMilliSecs(1000);
	}
	
	return(0);

}
