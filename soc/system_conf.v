`define LATTICE_FAMILY "EC"
`define LATTICE_FAMILY_EC
`ifndef SYSTEM_CONF
`define SYSTEM_CONF
`timescale 1ns / 100 ps
`define CFG_EBA_RESET 32'h0
`define MULT_ENABLE
`define CFG_PL_MULTIPLY_ENABLED
`define SHIFT_ENABLE
`define CFG_PL_BARREL_SHIFT_ENABLED
`define CFG_MC_DIVIDE_ENABLED
`define CFG_SIGN_EXTEND_ENABLED
`define LM32_I_PC_WIDTH 22
`define ebrEBR_WB_DAT_WIDTH 32
`define ebrINIT_FILE_NAME "none"
`define ebrINIT_FILE_FORMAT "hex"
`define gpioGPIO_WB_DAT_WIDTH 32
`define gpioGPIO_WB_ADR_WIDTH 4
`define gpioOUTPUT_PORTS_ONLY
`define gpioDATA_WIDTH 32'h8
`endif // SYSTEM_CONF
