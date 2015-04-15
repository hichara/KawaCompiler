	.text
	.file	"kawac.ll"
	.section	.rodata.cst8,"aM",@progbits,8
	.align	8
.LCPI0_0:
	.quad	4624665741382123520     # double 15.056619644165039
	.text
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%r15
.Ltmp0:
	.cfi_def_cfa_offset 16
	pushq	%r14
.Ltmp1:
	.cfi_def_cfa_offset 24
	pushq	%rbx
.Ltmp2:
	.cfi_def_cfa_offset 32
	subq	$32, %rsp
.Ltmp3:
	.cfi_def_cfa_offset 64
.Ltmp4:
	.cfi_offset %rbx, -32
.Ltmp5:
	.cfi_offset %r14, -24
.Ltmp6:
	.cfi_offset %r15, -16
	movb	$0, 16(%rsp)
	movb	$111, 15(%rsp)
	movb	$116, 14(%rsp)
	movb	$97, 13(%rsp)
	movb	$97, 12(%rsp)
	movb	$112, 11(%rsp)
	movb	$97, 10(%rsp)
	movb	$90, 9(%rsp)
	movl	$15, %edi
	callq	int_to_str
	movq	%rax, %r14
	movsd	.LCPI0_0(%rip), %xmm0
	callq	float_to_str
	movq	%rax, %rbx
	movq	%rbx, %rdi
	callq	strlen
	movl	%eax, %edi
	callq	int_to_str
	movq	%rax, %r15
	leaq	9(%rsp), %rdi
	callq	puts
	movq	%r14, %rdi
	callq	puts
	movq	%rbx, %rdi
	callq	puts
	movq	%r15, %rdi
	callq	puts
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbx
	popq	%r14
	popq	%r15
	retq
.Ltmp7:
	.size	main, .Ltmp7-main
	.cfi_endproc

	.globl	int_to_str
	.align	16, 0x90
	.type	int_to_str,@function
int_to_str:                             # @int_to_str
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%rbp
.Ltmp8:
	.cfi_def_cfa_offset 16
	pushq	%rbx
.Ltmp9:
	.cfi_def_cfa_offset 24
	pushq	%rax
.Ltmp10:
	.cfi_def_cfa_offset 32
.Ltmp11:
	.cfi_offset %rbx, -24
.Ltmp12:
	.cfi_offset %rbp, -16
	movl	%edi, %ebp
	movl	$50, %edi
	callq	malloc
	movq	%rax, %rbx
	movl	$kawa_format_int, %esi
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ebp, %edx
	callq	sprintf
	movq	%rbx, %rax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	retq
.Ltmp13:
	.size	int_to_str, .Ltmp13-int_to_str
	.cfi_endproc

	.globl	float_to_str
	.align	16, 0x90
	.type	float_to_str,@function
float_to_str:                           # @float_to_str
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%rbx
.Ltmp14:
	.cfi_def_cfa_offset 16
	subq	$16, %rsp
.Ltmp15:
	.cfi_def_cfa_offset 32
.Ltmp16:
	.cfi_offset %rbx, -16
	movsd	%xmm0, 8(%rsp)          # 8-byte Spill
	movl	$50, %edi
	callq	malloc
	movq	%rax, %rbx
	movl	$kawa_format_double, %esi
	movb	$1, %al
	movq	%rbx, %rdi
	movsd	8(%rsp), %xmm0          # 8-byte Reload
	callq	sprintf
	movq	%rbx, %rax
	addq	$16, %rsp
	popq	%rbx
	retq
.Ltmp17:
	.size	float_to_str, .Ltmp17-float_to_str
	.cfi_endproc

	.type	kawa_format_int,@object # @kawa_format_int
	.section	.rodata,"a",@progbits
	.globl	kawa_format_int
kawa_format_int:
	.asciz	"%d"
	.size	kawa_format_int, 3

	.type	kawa_format_double,@object # @kawa_format_double
	.globl	kawa_format_double
kawa_format_double:
	.asciz	"%f"
	.size	kawa_format_double, 3


	.section	".note.GNU-stack","",@progbits
