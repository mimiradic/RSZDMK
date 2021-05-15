################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Doxygen_projekat.lss \

FLASH_IMAGE += \
Doxygen_projekat.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: Doxygen_projekat.elf secondary-outputs

# Tool invocations
Doxygen_projekat.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Doxygen_projekat.map -mmcu=atmega328p -o "Doxygen_projekat.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Doxygen_projekat.lss: Doxygen_projekat.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Doxygen_projekat.elf  >"Doxygen_projekat.lss"
	@echo 'Finished building: $@'
	@echo ' '

Doxygen_projekat.hex: Doxygen_projekat.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Doxygen_projekat.elf  "Doxygen_projekat.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Doxygen_projekat.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p Doxygen_projekat.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: Doxygen_projekat.elf
	@echo 'Invoking: AVRDude'
	E:\eclipse\eclipse\bin\avrdude -pm328p -carduino -PCOM3 -Uflash:w:Doxygen_projekat.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Doxygen_projekat.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
