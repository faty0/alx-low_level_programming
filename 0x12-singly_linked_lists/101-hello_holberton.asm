section .data
    hello db 'Hello, Holberton', 0

section .text
    global main

    extern printf

main:
    push qword hello
    call printf
    add rsp, 8
    ret
