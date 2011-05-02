################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
$(ROOT)/ztex_spartan6/DDInit.c \
$(ROOT)/ztex_spartan6/DDStructs.c \
$(ROOT)/ztex_spartan6/LCD.c \
$(ROOT)/ztex_spartan6/LatticeMico32.c \
$(ROOT)/ztex_spartan6/LatticeMico32Uart.c \
$(ROOT)/ztex_spartan6/LookupServices.c \
$(ROOT)/ztex_spartan6/MicoFileClose.c \
$(ROOT)/ztex_spartan6/MicoFileDevices.c \
$(ROOT)/ztex_spartan6/MicoFileIsAtty.c \
$(ROOT)/ztex_spartan6/MicoFileOpen.c \
$(ROOT)/ztex_spartan6/MicoFileRead.c \
$(ROOT)/ztex_spartan6/MicoFileSeek.c \
$(ROOT)/ztex_spartan6/MicoFileStat.c \
$(ROOT)/ztex_spartan6/MicoFileWrite.c \
$(ROOT)/ztex_spartan6/MicoGPIO.c \
$(ROOT)/ztex_spartan6/MicoGPIOService.c \
$(ROOT)/ztex_spartan6/MicoInterrupts.c \
$(ROOT)/ztex_spartan6/MicoSbrk.c \
$(ROOT)/ztex_spartan6/MicoStdStreams.c \
$(ROOT)/ztex_spartan6/MicoUtils.c \
$(ROOT)/ztex_spartan6/printf_shrink.c 

DEPS += \
${addprefix ./ztex_spartan6/, \
DDInit.d \
DDStructs.d \
LCD.d \
LatticeMico32.d \
LatticeMico32DbgModule.d \
LatticeMico32Uart.d \
LatticeMicoUtils.d \
LookupServices.d \
MicoExit.d \
MicoFileClose.d \
MicoFileDevices.d \
MicoFileIsAtty.d \
MicoFileOpen.d \
MicoFileRead.d \
MicoFileSeek.d \
MicoFileStat.d \
MicoFileWrite.d \
MicoGPIO.d \
MicoGPIOService.d \
MicoInterrupts.d \
MicoSbrk.d \
MicoSleepHelper.d \
MicoStdStreams.d \
MicoUtils.d \
crt0ram.d \
printf_shrink.d \
}


ASM_SRCS += \
$(ROOT)/ztex_spartan6/LatticeMico32DbgModule.S \
$(ROOT)/ztex_spartan6/LatticeMicoUtils.S \
$(ROOT)/ztex_spartan6/MicoExit.S \
$(ROOT)/ztex_spartan6/MicoSleepHelper.S \
$(ROOT)/ztex_spartan6/crt0ram.S