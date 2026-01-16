; 100-hello_world.asm
; nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello

global main

section .data
    msg db "Hello, World", 10
    len equ $ - msg

section .text
main:
    ; ssize_t write(int fd, const void *buf, size_t count)
    mov     rax, 1          ; syscall number for write
    mov     rdi, 1          ; fd = 1 (stdout)
    mov     rsi, msg        ; buf = msg
    mov     rdx, len        ; count = len
    syscall                 ; do the write

    ; return 0 from main (no extra syscalls needed)
    xor     eax, eax
    ret
