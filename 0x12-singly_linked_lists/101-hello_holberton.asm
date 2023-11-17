section .data
    hello db 'Hello, Holberton', 0

section .text
    extern printf

    global main

main:
    ; prepare arguments for printf
    mov rdi, hello  ; format specifier
    mov rax, 0      ; number of floating-point arguments (variadic function)
    call printf     ; call printf

    ; exit the program
    mov rax, 60     ; system call for sys_exit
    xor rdi, rdi    ; exit code 0
    syscall         ; call kernel

