################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/ASerial.c \
../Generated_Code/ASerialLdd1.c \
../Generated_Code/CI2C0.c \
../Generated_Code/Cpu.c \
../Generated_Code/IntI2cLdd1.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/Pins1.c 

OBJS += \
./Generated_Code/ASerial.o \
./Generated_Code/ASerialLdd1.o \
./Generated_Code/CI2C0.o \
./Generated_Code/Cpu.o \
./Generated_Code/IntI2cLdd1.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/Pins1.o 

C_DEPS += \
./Generated_Code/ASerial.d \
./Generated_Code/ASerialLdd1.d \
./Generated_Code/CI2C0.d \
./Generated_Code/Cpu.d \
./Generated_Code/IntI2cLdd1.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/Pins1.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/iofiles" -I"C:/Users/UABC/workspace.kds/MagnAcc_FRDM-K64/Sources" -I"C:/Users/UABC/workspace.kds/MagnAcc_FRDM-K64/Generated_Code" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LL12/system" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


