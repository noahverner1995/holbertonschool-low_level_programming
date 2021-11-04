global _start

section .text

_start:
mov rax, 0x1        	; write(
mov rdi, 0x1        	;   STDOUT_FILENO,
mov rsi, message      	;   "Hello, World\n",
mov rdx, msglen   	;   sizeof("Hello, world!\n")
syscall           	; );

mov rax, 0x3c       	; exit(
mov rdi, 0x2        	;   EXIT_SUCCESS
syscall           	; );

section .data	
message: db "Hello, World", 0xA
msglen: equ $ -message
