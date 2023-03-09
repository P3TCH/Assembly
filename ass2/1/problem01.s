    .global problem01
    .text
problem01:
    mov %rdx , %rax
    add %rsi , %rax
    sub %rdx , %rax
    neg %rax
    ret


    