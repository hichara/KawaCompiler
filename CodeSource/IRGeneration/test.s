	.text
	.file	"test.ll"
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:                                 # %second
	pushq	%rax
.Ltmp0:
	.cfi_def_cfa_offset 16
	movl	$.L.str, %edi
	callq	puts
	xorl	%eax, %eax
	popq	%rdx
	retq
.Ltmp1:
	.size	main, .Ltmp1-main
	.cfi_endproc

	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"hello world\n"
	.size	.L.str, 13


	.section	".note.GNU-stack","",@progbits
