    .global exercise2
    .text
exercise2:
    mov %rdx , %rax
    imul $2 , %rax
    add %rsi , %rax

    add %rsi , %rdi
    imul $2 , %rdi
    add %rdx , %rdi

    sub %rax , %rdi
    mov %rdi , %rax
    ret


    