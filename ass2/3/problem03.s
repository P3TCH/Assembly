    .global problem03
    .text
problem03:
    cmp $0b011000010 , %rdi
    jg LG
    mov $0x11 , %rax
    jmp EXIT
LG: mov $0x12 , %rax
EXIT: ret

