global start

section .text

start:

mov rax, 0x20000004     ; sys_write
mov rdi, 1              ; stdout
lea rsi, [rel txt]      ; &txt
mov rdx, size           ; size
syscall

mov rax, 0
ret

section .data

txt: db 'Hello world!', 10, 0
size: equ $-txt