    .global ldgt
    .text
ldgt:  
    mov %rdi , %rax
    mov $10 , %rcx
    cqto
    idiv %rcx
    mov %rdx, %rax #เอา rdx ไปใน rax

    ret
