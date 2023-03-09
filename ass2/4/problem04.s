    .global problem04
    .text
problem04:
    cmp %rdi , %rsi
    jg LG
    mov $0x11 , %rax
    jmp EXIT
LG: mov $0x12 , %rax
EXIT: ret

