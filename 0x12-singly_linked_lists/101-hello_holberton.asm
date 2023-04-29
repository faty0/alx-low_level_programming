section .data
    message db 'Hello, Holberton', 10

section .text
global main
extern printf

main:
    mov rdi, message
    xor eax, eax
    call printf
    xor eax, eax
    ret
