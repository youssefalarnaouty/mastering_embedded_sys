#@copywrite : Youssef Arnaouty

#Specify the toolchain
CC=arm-none-eabi-

#Parameters and flags
CFLAGS= -mcpu=cortex-m4 -gdwarf-2 -g 

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
PROJECT_NAME =Assignment_cortex_m4

all: $(PROJECT_NAME).bin
	@echo "<========Building Successful ========>"
	
#Commented as int his project i will write the startup in c	
#startup.o: startup.s
#$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS)  -c  $< -o $@

$(PROJECT_NAME).elf: $(ASOBJ) $(OBJ)
	$(CC)ld.exe -g -T Linkerscript.ld $(LIBS) $(ASOBJ) $(OBJ) -o $@ -Map=Map_file.map
	cp $(PROJECT_NAME).elf $(PROJECT_NAME).axf

$(PROJECT_NAME).bin: $(PROJECT_NAME).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin 
clean:
	rm *.elf *.bin