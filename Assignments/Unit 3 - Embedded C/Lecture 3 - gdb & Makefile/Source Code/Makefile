#@copywrite : Youssef Arnaouty

#Specify the toolchain
CC=arm-none-eabi-

#Parameters and flags
CFLAGS= -mcpu=cortex-m3 -gdwarf-2 

#The inlcudes 
INCS= -I .

#Static libs
LIBS= 

#All .c files to gcc compiler
SRC=$(wildcard *.c)

#All .c files in SRC => .o 
OBJ=$(SRC:.c=.o)

#All .s  files to AS
AS=$(wildcard *.s)

#take anyfile .s in AS and convert it to .o 
ASOBJ=$(AS:.s=.o)

#Project name
PROJECT_NAME =learn_in_depth_cortex_m3

all: $(PROJECT_NAME).bin
	@echo "<========Building Successful ========>"
	
#Commented as int his project i will write the startup in c	
#startup.o: startup.s
#$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS)  -c  $< -o $@

$(PROJECT_NAME).elf: $(ASOBJ) $(OBJ)
	$(CC)ld.exe -g -T Linkerscript.ld $(LIBS) $(ASOBJ) $(OBJ) -o $@ -Map=Map_file.map

$(PROJECT_NAME).bin: $(PROJECT_NAME).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin *.map
clean:
	rm *.elf *.bin *.map