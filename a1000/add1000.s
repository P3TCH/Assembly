    .global add1000
    .text
add1000:
    mov %rdi , %rax
    add $1000 , %rax
    ret
