extern printf

section .text
	global main

main:

	mov rdi,format		; Format string
	mov rsi,message	; Message string
	mov rax,0	; Clear eax register (no floating-point arguments)
	call printf

	pop rbp

	mov rax,0
	ret

section .data
        message: db "Hello Holberton", 0
        format: db "%s", 10, 0
