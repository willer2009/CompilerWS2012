################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Scanner/Main.cpp \
../Scanner/Scanner.cpp 

OBJS += \
./Scanner/Main.o \
./Scanner/Scanner.o 

CPP_DEPS += \
./Scanner/Main.d \
./Scanner/Scanner.d 


# Each subdirectory must supply rules for building sources it contributes
Scanner/%.o: ../Scanner/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


