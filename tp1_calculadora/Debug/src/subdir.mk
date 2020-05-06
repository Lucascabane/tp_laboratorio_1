################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/menu.c \
../src/operaciones.c \
../src/tp1_calculadora.c 

OBJS += \
./src/menu.o \
./src/operaciones.o \
./src/tp1_calculadora.o 

C_DEPS += \
./src/menu.d \
./src/operaciones.d \
./src/tp1_calculadora.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


