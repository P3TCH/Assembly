    .global exercise4
    .text
exercise4:
    mov %rdi , %rax
    mov $10 , %rcx

    cqto
    idiv %rcx
    cqto
    idiv %rcx
    mov %rdx , %rax
    ret
