; Filename: 101-hello_holberton.asm - Print a string using printf
; Author: Akinbami Taofeek
; Assemble: nasm -f elf64 101-hello_holberton.asm
; Link: gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
; Run: ./hello
; You are only allowed to use printf
; You are not allowed to use interrupts
; Your program will be compiled using nasm and gcc

; Equivalent C code
; #include <stdio.h>
; int main(void)
; {
; 	char msg[] = "Hello, Holberton";
;   	printf("%s\n",msg);
;   	return (0);
; }
section .data
    hello db 'Hello, Holberton', 0  ; Define a string for "Hello, Holberton"
    format db '%s', 10, 0  ; Define a format string for printf for  "\n" and '0'

section .text
    extern printf  ; Declare printf as an external symbol

global main
main:
    sub rsp, 8  ; Align the stack by subtracting 8 from rsp

    lea rdi, [format]  ; Load the format string address into rdi
    lea rsi, [hello]  ; Load the hello string address into rsi
    xor eax, eax  ; Clear eax register for no floating-point arguments
    call printf  ; Call printf with format string and hello string arguments

    add rsp, 8  ; Restore the stack by adding 8 to rsp

    mov eax, 0  ; Set return value of main to 0
    ret  ; Return from main

