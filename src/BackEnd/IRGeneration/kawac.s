	.text
	.file	"kawac.ll"
	.globl	int_to_str
	.align	16, 0x90
	.type	int_to_str,@function
int_to_str:                             # @int_to_str
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%rbp
.Ltmp0:
	.cfi_def_cfa_offset 16
	pushq	%rbx
.Ltmp1:
	.cfi_def_cfa_offset 24
	pushq	%rax
.Ltmp2:
	.cfi_def_cfa_offset 32
.Ltmp3:
	.cfi_offset %rbx, -24
.Ltmp4:
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
.Ltmp5:
	.size	int_to_str, .Ltmp5-int_to_str
	.cfi_endproc

	.globl	float_to_str
	.align	16, 0x90
	.type	float_to_str,@function
float_to_str:                           # @float_to_str
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%rbx
.Ltmp6:
	.cfi_def_cfa_offset 16
	subq	$16, %rsp
.Ltmp7:
	.cfi_def_cfa_offset 32
.Ltmp8:
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
.Ltmp9:
	.size	float_to_str, .Ltmp9-float_to_str
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%rax
.Ltmp10:
	.cfi_def_cfa_offset 16
	callq	KawaConstructor_class_A_pt_KawaVoid
	movq	8(%rax), %rax
	callq	*24(%rax)
	xorl	%eax, %eax
	popq	%rdx
	retq
.Ltmp11:
	.size	main, .Ltmp11-main
	.cfi_endproc

	.globl	char_to_str
	.align	16, 0x90
	.type	char_to_str,@function
char_to_str:                            # @char_to_str
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%rbp
.Ltmp12:
	.cfi_def_cfa_offset 16
	pushq	%rbx
.Ltmp13:
	.cfi_def_cfa_offset 24
	pushq	%rax
.Ltmp14:
	.cfi_def_cfa_offset 32
.Ltmp15:
	.cfi_offset %rbx, -24
.Ltmp16:
	.cfi_offset %rbp, -16
	movl	%edi, %ebp
	movl	$50, %edi
	callq	malloc
	movq	%rax, %rbx
	movl	$kawa_format_char, %esi
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ebp, %edx
	callq	sprintf
	movq	%rbx, %rax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	retq
.Ltmp17:
	.size	char_to_str, .Ltmp17-char_to_str
	.cfi_endproc

	.globl	concat
	.align	16, 0x90
	.type	concat,@function
concat:                                 # @concat
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp18:
	.cfi_def_cfa_offset 16
	pushq	%r14
.Ltmp19:
	.cfi_def_cfa_offset 24
	pushq	%rbx
.Ltmp20:
	.cfi_def_cfa_offset 32
.Ltmp21:
	.cfi_offset %rbx, -32
.Ltmp22:
	.cfi_offset %r14, -24
.Ltmp23:
	.cfi_offset %rbp, -16
	movq	%rsi, %r14
	movq	%rdi, %rbx
                                        # kill: RDI<def> RBX<kill>
	callq	strlen
	movl	%eax, %ebp
	movq	%r14, %rdi
	callq	strlen
	addl	%ebp, %eax
	movslq	%eax, %rsi
	incq	%rsi
	movl	$1, %edi
	callq	calloc
	movq	%rax, %rdi
	movq	%rbx, %rsi
	callq	strcat
	movq	%rax, %rdi
	movq	%r14, %rsi
	callq	strcat
	popq	%rbx
	popq	%r14
	popq	%rbp
	retq
.Ltmp24:
	.size	concat, .Ltmp24-concat
	.cfi_endproc

	.globl	afficheOk
	.align	16, 0x90
	.type	afficheOk,@function
afficheOk:                              # @afficheOk
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%rax
.Ltmp25:
	.cfi_def_cfa_offset 16
	movl	$.L__unnamed_1, %edi
	movl	$.L__unnamed_1, %esi
	callq	concat
	movq	%rax, %rdi
	callq	puts
	popq	%rax
	retq
.Ltmp26:
	.size	afficheOk, .Ltmp26-afficheOk
	.cfi_endproc

	.globl	get_table_adhocTable__class_A_class_A
	.align	16, 0x90
	.type	get_table_adhocTable__class_A_class_A,@function
get_table_adhocTable__class_A_class_A:  # @get_table_adhocTable__class_A_class_A
	.cfi_startproc
# BB#0:                                 # %entry
	movl	$adhocTable__class_A_class_A, %eax
	retq
.Ltmp27:
	.size	get_table_adhocTable__class_A_class_A, .Ltmp27-get_table_adhocTable__class_A_class_A
	.cfi_endproc

	.globl	KawaConstructor_class_A_pt_KawaVoid
	.align	16, 0x90
	.type	KawaConstructor_class_A_pt_KawaVoid,@function
KawaConstructor_class_A_pt_KawaVoid:    # @KawaConstructor_class_A_pt_KawaVoid
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%rbx
.Ltmp28:
	.cfi_def_cfa_offset 16
	subq	$16, %rsp
.Ltmp29:
	.cfi_def_cfa_offset 32
.Ltmp30:
	.cfi_offset %rbx, -16
	callq	get_table_adhocTable__class_A_class_A
	movq	%rax, 8(%rsp)
	leaq	(%rsp), %rbx
	movq	%rbx, %rdi
	callq	SubConstructor_class_A_pt_KawaVoid
	movq	%rbx, %rax
	addq	$16, %rsp
	popq	%rbx
	retq
.Ltmp31:
	.size	KawaConstructor_class_A_pt_KawaVoid, .Ltmp31-KawaConstructor_class_A_pt_KawaVoid
	.cfi_endproc

	.globl	SubConstructor_class_A_pt_KawaVoid
	.align	16, 0x90
	.type	SubConstructor_class_A_pt_KawaVoid,@function
SubConstructor_class_A_pt_KawaVoid:     # @SubConstructor_class_A_pt_KawaVoid
	.cfi_startproc
# BB#0:                                 # %entry
	retq
.Ltmp32:
	.size	SubConstructor_class_A_pt_KawaVoid, .Ltmp32-SubConstructor_class_A_pt_KawaVoid
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

	.type	kawa_format_char,@object # @kawa_format_char
	.globl	kawa_format_char
kawa_format_char:
	.asciz	"%c"
	.size	kawa_format_char, 3

	.type	attribut_index__class_A_index,@object # @attribut_index__class_A_index
	.bss
	.globl	attribut_index__class_A_index
	.align	4
attribut_index__class_A_index:
	.long	0                       # 0x0
	.size	attribut_index__class_A_index, 4

	.type	attribut_index__class_A_bossun,@object # @attribut_index__class_A_bossun
	.data
	.globl	attribut_index__class_A_bossun
	.align	4
attribut_index__class_A_bossun:
	.long	1                       # 0x1
	.size	attribut_index__class_A_bossun, 4

	.type	attribut_index__class_A_repre,@object # @attribut_index__class_A_repre
	.globl	attribut_index__class_A_repre
	.align	4
attribut_index__class_A_repre:
	.long	2                       # 0x2
	.size	attribut_index__class_A_repre, 4

	.type	attribut_index__class_A_mpm,@object # @attribut_index__class_A_mpm
	.globl	attribut_index__class_A_mpm
	.align	4
attribut_index__class_A_mpm:
	.long	3                       # 0x3
	.size	attribut_index__class_A_mpm, 4

	.type	.L__unnamed_1,@object   # @0
	.section	.rodata.str1.1,"aMS",@progbits,1
.L__unnamed_1:
	.asciz	"afficheOk"
	.size	.L__unnamed_1, 10

	.type	methode_index_afficheOk,@object # @methode_index_afficheOk
	.data
	.globl	methode_index_afficheOk
	.align	4
methode_index_afficheOk:
	.long	6                       # 0x6
	.size	methode_index_afficheOk, 4

	.type	adhocTable__class_A_class_A,@object # @adhocTable__class_A_class_A
	.section	.rodata,"a",@progbits
	.globl	adhocTable__class_A_class_A
	.align	16
adhocTable__class_A_class_A:
	.quad	afficheOk
	.quad	afficheOk
	.quad	afficheOk
	.quad	afficheOk
	.quad	afficheOk
	.quad	afficheOk
	.quad	afficheOk
	.size	adhocTable__class_A_class_A, 56

	.type	abs_index,@object       # @abs_index
	.data
	.globl	abs_index
	.align	4
abs_index:
	.long	1558                    # 0x616
	.size	abs_index, 4


	.section	".note.GNU-stack","",@progbits
