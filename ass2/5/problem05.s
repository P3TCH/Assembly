    .global problem05
    .text
problem05:
    xor %rdx , %rdx
    xor %rax , %rax
LOOP:
    cmp %rdi , %rdx
    jg DONE
    add %rdx , %rax
    add $1 , %rdx
    jmp LOOP
DONE:
    ret

