	.text
	.file	"kawa.ll"
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:                                 # %entrybloc
	movl	$5, %eax
	retq
.Ltmp0:
	.size	main, .Ltmp0-main
	.cfi_endproc


	.section	".note.GNU-stack","",@progbits
