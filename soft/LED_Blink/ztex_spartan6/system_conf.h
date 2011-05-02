#ifndef __SYSTEM_CONFIG_H_
#define __SYSTEM_CONFIG_H_


#define FPGA_DEVICE_FAMILY    "EC"
#define PLATFORM_NAME         "ztex_spartan6"
#define USE_PLL               (0)
#define CPU_FREQUENCY         (12000000)


/* FOUND 1 CPU UNIT(S) */

/*
 * CPU Instance LM32 component configuration
 */
#define CPU_NAME "LM32"
#define CPU_EBA (0x00000000)
#define CPU_DIVIDE_ENABLED (1)
#define CPU_SIGN_EXTEND_ENABLED (1)
#define CPU_MULTIPLIER_ENABLED (1)
#define CPU_SHIFT_ENABLED (1)
#define CPU_DEBUG_ENABLED (0)
#define CPU_HW_BREAKPOINTS_ENABLED (0)
#define CPU_NUM_HW_BREAKPOINTS (0)
#define CPU_NUM_WATCHPOINTS (0)
#define CPU_ICACHE_ENABLED (0)
#define CPU_ICACHE_SETS (512)
#define CPU_ICACHE_ASSOC (1)
#define CPU_ICACHE_BYTES_PER_LINE (16)
#define CPU_DCACHE_ENABLED (0)
#define CPU_DCACHE_SETS (512)
#define CPU_DCACHE_ASSOC (1)
#define CPU_DCACHE_BYTES_PER_LINE (16)
#define CPU_DEBA (0x00000000)
#define CPU_CHARIO_IN        (0)
#define CPU_CHARIO_OUT       (0)
#define CPU_CHARIO_TYPE      "JTAG UART"

/*
 * ebr component configuration
 */
#define EBR_NAME  "ebr"
#define EBR_BASE_ADDRESS  (0x00000000)
#define EBR_SIZE  (4096)
#define EBR_IS_READABLE   (1)
#define EBR_IS_WRITABLE   (1)
#define EBR_ADDRESS_LOCK  (0)
#define EBR_DISABLE  (0)
#define EBR_WB_DAT_WIDTH  (32)
#define EBR_INIT_FILE_NAME  "none"
#define EBR_INIT_FILE_FORMAT  "hex"

/*
 * gpio component configuration
 */
#define GPIO_NAME  "gpio"
#define GPIO_BASE_ADDRESS  (0x80000000)
#define GPIO_SIZE  (16)
#define GPIO_CHARIO_IN        (0)
#define GPIO_CHARIO_OUT       (0)
#define GPIO_WB_DAT_WIDTH  (32)
#define GPIO_WB_ADR_WIDTH  (4)
#define GPIO_ADDRESS_LOCK  (0)
#define GPIO_DISABLE  (0)
#define GPIO_OUTPUT_PORTS_ONLY  (1)
#define GPIO_INPUT_PORTS_ONLY  (0)
#define GPIO_TRISTATE_PORTS  (0)
#define GPIO_BOTH_INPUT_AND_OUTPUT  (0)
#define GPIO_DATA_WIDTH  (8)
#define GPIO_INPUT_WIDTH  (1)
#define GPIO_OUTPUT_WIDTH  (1)
#define GPIO_IRQ_MODE  (0)
#define GPIO_LEVEL  (0)
#define GPIO_EDGE  (0)
#define GPIO_EITHER_EDGE_IRQ  (0)
#define GPIO_POSE_EDGE_IRQ  (0)
#define GPIO_NEGE_EDGE_IRQ  (0)


#endif /* __SYSTEM_CONFIG_H_ */
