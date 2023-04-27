section .data
    message db "Hello, Holberton", 10

section .text
    global main

main:
    push    rbp
    mov     rbp, rsp
    sub     rsp, 16

    lea     rdi, [message]
    mov     eax, 0
    call    printf

    mov     eax, 0
    leave
    ret
