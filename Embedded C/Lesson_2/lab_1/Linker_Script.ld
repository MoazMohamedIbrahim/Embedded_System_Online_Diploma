ENTRY(reset)

MEMORY
{
	MYRam (rwx) : ORIGIN = 0x00000000, LENGTH = 64M
}

SECTIONS
{
	. = 0x10000;
	.startup . :
	{
		startup.o(.text)
	}> MYRam
	.text :
	{
	*(.text) *(.rodata)
	}> MYRam
	.data :
	{
	*(.data)
	}> MYRam
	.bss :
	{
	*(.bss)
	}> MYRam
	.=. + 0x1000;
	Stack_Top = .;
}
