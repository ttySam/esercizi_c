	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 5	sdk_version 15, 5
	.globl	_grainCount                     ; -- Begin function grainCount
	.p2align	2
_grainCount:                            ; @grainCount
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	w0, [x29, #-8]
	stur	wzr, [x29, #-12]
	ldur	w8, [x29, #-8]
	tbnz	w8, #31, LBB0_2
	b	LBB0_1
LBB0_1:
	ldur	w8, [x29, #-8]
	subs	w8, w8, #64
	b.le	LBB0_3
	b	LBB0_2
LBB0_2:
	ldur	w8, [x29, #-8]
                                        ; kill: def $x8 killed $w8
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	stur	wzr, [x29, #-4]
	b	LBB0_4
LBB0_3:
	ldur	w8, [x29, #-8]
	subs	w8, w8, #1
	scvtf	d1, w8
	fmov	d0, #2.00000000
	bl	_pow
	fcvtzs	w8, d0
	str	w8, [sp, #16]
	ldr	w8, [sp, #16]
	stur	w8, [x29, #-4]
	b	LBB0_4
LBB0_4:
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	mov	x9, sp
	sub	x8, x29, #8
	str	x8, [x9]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_scanf
	ldur	w0, [x29, #-8]
	bl	_grainCount
	ldur	w8, [x29, #-8]
                                        ; kill: def $x8 killed $w8
	mov	x9, sp
                                        ; implicit-def: $x10
	mov	x10, x0
	str	x10, [x9]
	str	x8, [x9, #8]
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	mov	w8, #1                          ; =0x1
	stur	w8, [x29, #-20]
	b	LBB1_1
LBB1_1:                                 ; =>This Inner Loop Header: Depth=1
	ldur	w8, [x29, #-20]
	subs	w8, w8, #65
	b.ge	LBB1_4
	b	LBB1_2
LBB1_2:                                 ;   in Loop: Header=BB1_1 Depth=1
	ldur	w0, [x29, #-20]
	bl	_grainCount
	ldur	x8, [x29, #-16]
	add	x8, x8, w0, sxtw
	stur	x8, [x29, #-16]
	b	LBB1_3
LBB1_3:                                 ;   in Loop: Header=BB1_1 Depth=1
	ldur	w8, [x29, #-20]
	add	w8, w8, #1
	stur	w8, [x29, #-20]
	b	LBB1_1
LBB1_4:
	ldur	x8, [x29, #-16]
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.4@PAGE
	add	x0, x0, l_.str.4@PAGEOFF
	bl	_printf
	mov	w0, #0                          ; =0x0
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%d non \303\250 un numero valido\n"

l_.str.1:                               ; @.str.1
	.asciz	"Di quale quadrato vuoi conoscere la quantit\303\240 di chicchi di mais? "

l_.str.2:                               ; @.str.2
	.asciz	"%d"

l_.str.3:                               ; @.str.3
	.asciz	"Ci sono %d chicchi di mais nel quadrato numero %d\n"

l_.str.4:                               ; @.str.4
	.asciz	"Il totale dei chicchi di mais \303\250 %lu\n"

.subsections_via_symbols
