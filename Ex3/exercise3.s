    .global exercise3
    .text
exercise3:
    add %rsi , %rdi
    mov %rdi , %rax
    mov $2 , %rcx

    cqto
    idiv %rcx
    mov %rdx , %rax
    ret
