global main         ; Entry point of the program
extern printf       ; Declare the printf function from the C library

section .data
    format db "Hello, Holberton", 10, 0  ; Define a null-terminated string with newline (10) and null (0) at the end

section .text
main:
    mov edi, format  ; Move the address of the format string into the edi register (first argument for printf)
    xor eax, eax     ; Clear eax register (no floating point parameters)
    call printf      ; Call the printf function to print the formatted string
    mov eax, 0       ; Set return value to 0 (success)
    ret              ; Return from the main function
