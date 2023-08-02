section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 10, 0   ; Newline character (10) after the string

section .text
    global main

    extern printf

main:
    ; Push the address of the format string onto the stack
    lea rdi, [format]

    ; Push the address of the hello_msg string onto the stack
    lea rsi, [hello_msg]

    ; Call the printf function
    call printf

    ; Clean up the stack (No arguments were passed to printf)
    add rsp, 8

    ; Return from main (exit the program)
    ret
