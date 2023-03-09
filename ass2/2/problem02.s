    .global problem02
    .text
problem02:
    mov %rdi , %rax
    add $0xA , %r9
    cqto
    idiv %r9
    cqto
    idiv %r9
    mov %rdx , %rax
    ret

