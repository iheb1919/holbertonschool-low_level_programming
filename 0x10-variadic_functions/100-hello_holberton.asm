section .data
message db "Hello, Holberton"
section .text
global_start
_start:
mov rax, 1
mov rdi, 1
mov rsi,message
mov rdx, 14
syscall
