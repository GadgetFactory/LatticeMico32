#include "DDStructs.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

void LatticeDDInit(void)
{

    /* initialize LM32 instance of lm32_top */
    LatticeMico32Init(&lm32_top_LM32);
    
    /* initialize gpio instance of gpio */
    MicoGPIOInit(&gpio_gpio);
    
    /* invoke application's main routine*/
    main();
}



#ifdef __cplusplus
};
#endif /* __cplusplus */
