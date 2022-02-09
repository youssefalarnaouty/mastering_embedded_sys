MEMORY
{
	flash (rx) : ORIGIN = 0x08000000, LENGTH = 128k
	sram (rwx) : ORIGIN = 0x20000000, LENGTH = 20k
}

SECTIONS
{
	.text : {
		*(.vector*)
		*(.text*)
		*(.rodata)
		_E_text_ = .; 
	}> flash

	.data : {
		_S_data_ = . ;
		*(.data*)
		. = ALIGN(4) ;
		_E_data_ = . ;

	}>sram AT> flash
	
	.bss : {
		_S_bss_ = . ;
		*(.bss*)
		. = ALIGN(4) ;
		_E_bss_ = . ;

		. = ALIGN(4) ;
		. = . + 0x1000 ;
		_stack_top = . ;
	
	}> sram



}