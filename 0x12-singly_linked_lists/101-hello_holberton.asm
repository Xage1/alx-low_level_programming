section .data
message db 'Hello, Holberton', 0x0a, 0

section .text
global main

extern printf

main:
push message
push qword 0
mov rax, 0
call printf
add rsp, 16
mov eax, 0
ret

