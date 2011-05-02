#ifndef LATTICE_DDINIT_HEADER_FILE
#define LATTICE_DDINIT_HEADER_FILE
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#include "LookupServices.h"
/* platform frequency in MHz */
#define MICO32_CPU_CLOCK_MHZ (12000000)

/*Device-driver structure for lm32_top*/
#define LatticeMico32Ctx_t_DEFINED (1)
typedef struct st_LatticeMico32Ctx_t {
    const char*   name;
} LatticeMico32Ctx_t;


/* lm32_top instance LM32*/
extern struct st_LatticeMico32Ctx_t lm32_top_LM32;

/* declare LM32 instance of lm32_top */
extern void LatticeMico32Init(struct st_LatticeMico32Ctx_t*);


/*Device-driver structure for gpio*/
#define MicoGPIOCtx_t_DEFINED (1)
typedef struct st_MicoGPIOCtx_t {
    const char*   name;
    unsigned int   base;
    unsigned int   intrLevel;
    unsigned int   output_only;
    unsigned int   input_only;
    unsigned int   in_and_out;
    unsigned int   tristate;
    unsigned int   data_width;
    unsigned int   input_width;
    unsigned int   output_width;
    unsigned int   intr_enable;
    unsigned int   wb_data_size;
    DeviceReg_t   lookupReg;
    void *   prev;
    void *   next;
} MicoGPIOCtx_t;


/* gpio instance gpio*/
extern struct st_MicoGPIOCtx_t gpio_gpio;

/* declare gpio instance of gpio */
extern void MicoGPIOInit(struct st_MicoGPIOCtx_t*);

extern int main();



#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif
