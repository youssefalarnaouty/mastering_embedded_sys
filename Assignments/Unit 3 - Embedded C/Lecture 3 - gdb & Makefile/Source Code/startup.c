#include <stdint.h>
void Reset_Handler();
void default_Handler(void)
{
	Reset_Handler();
}
extern int main();

/*Symbols used to provide start and end addresses for sections*/
extern unsigned int _E_text_;
extern unsigned int _S_data_;
extern unsigned int _E_data_;
extern unsigned int _S_bss_;
extern unsigned int _E_bss_;
extern unsigned int _stack_top;

/* handlers are weak therefore can be overwritten in other files, 
 * they are also aliased, therefore they use default_Handler and share its address unless they are overwritten*/
void NMI_Handler(void)__attribute__((weak,alias ("default_Handler")));;
void Hardfault_Handler(void)__attribute__((weak,alias ("default_Handler")));;
void MemoryManagement_Handler(void)__attribute__((weak,alias ("default_Handler")));;

/*Vector table*/
uint32_t vectors [] __attribute__((section(".vectors"))) = {
(uint32_t) &_stack_top,
(uint32_t) &Reset_Handler,
(uint32_t) &NMI_Handler,
(uint32_t) &Hardfault_Handler,
(uint32_t) &MemoryManagement_Handler
};

/*  Reset handler :
 *  1. Copies .data section from Flash to SRAM
 *  2. Reserve memory for .bss in SRAM and intializes it to zero
 *  3. Calls main()
*/

void Reset_Handler()
{
	/*Get size .data section  = .data_end - .data_start*/
	unsigned int Data_Size = (uint8_t*) & _E_data_ - (uint8_t*) & _S_data_ ;
	unsigned char * data_dest = (unsigned char *) &_S_data_;
	unsigned char * data_src = (unsigned char *) &_E_text_;
	for(int i = 0 ; i<Data_Size ; i++)
	{
		*((unsigned char *)data_dest++)= *((unsigned char *)data_src++);
	}

	/*Reserve .bss section */
	unsigned int Bss_Size = (uint8_t*) & _E_bss_ - (uint8_t*) & _S_bss_ ;
	unsigned char * bss_dest = (unsigned char *) & _S_bss_;
	for(int i = 0 ; i<Bss_Size ; i++)
	{
		*((unsigned char * )bss_dest++) = (unsigned char ) 0;
	}

	/* Call the main*/
	main();
}