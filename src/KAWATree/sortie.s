	.text
	.file	"sortie.ll"
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:                                 # %entry
	subq	$40, %rsp
.Ltmp0:
	.cfi_def_cfa_offset 48
	movb	$0, 39(%rsp)
	movb	$33, 38(%rsp)
	movb	$32, 37(%rsp)
	movb	$100, 36(%rsp)
	movb	$108, 35(%rsp)
	movb	$114, 34(%rsp)
	movb	$111, 33(%rsp)
	movb	$119, 32(%rsp)
	movb	$32, 31(%rsp)
	movb	$111, 30(%rsp)
	movb	$108, 29(%rsp)
	movb	$108, 28(%rsp)
	movb	$101, 27(%rsp)
	movb	$72, 26(%rsp)
	leaq	26(%rsp), %rdi
	callq	puts
	movb	$0, 25(%rsp)
	movb	$50, 24(%rsp)
	movb	$52, 23(%rsp)
	leaq	23(%rsp), %rdi
	callq	puts
	movb	$0, 22(%rsp)
	movb	$48, 21(%rsp)
	movb	$48, 20(%rsp)
	movb	$48, 19(%rsp)
	movb	$48, 18(%rsp)
	movb	$55, 17(%rsp)
	movb	$51, 16(%rsp)
	movb	$46, 15(%rsp)
	movb	$51, 14(%rsp)
	movb	$49, 13(%rsp)
	leaq	13(%rsp), %rdi
	callq	puts
	xorl	%eax, %eax
	addq	$40, %rsp
	retq
.Ltmp1:
	.size	main, .Ltmp1-main
	.cfi_endproc


	.section	".note.GNU-stack","",@progbits
