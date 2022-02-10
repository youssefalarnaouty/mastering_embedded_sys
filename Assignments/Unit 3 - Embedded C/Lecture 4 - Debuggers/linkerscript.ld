MEMORY
{
	flash (rx) : ORIGIN = 0x00000000, LENGTH = 512M
	sram (rwx) : ORIGIN = 0x20000000, LENGTH = 512M
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
	}> sram



}