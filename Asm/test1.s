global _start
section .bss
	num resb 5 
section .data
	msg db "the quick",0x0a
	len equ $- msg
section .text

	_start:
	mov [msg] ,dword "hell"
	

	mov eax ,4
	mov ebx ,1
	mov ecx ,msg
	mov edx ,len
	int 0x80
	
	push 100
	push 11
	mov eax ,1
	pop ebx
	int 0x80
		
	mov eax ,1   ; why don't print 10 ? 
	mov ebx ,10
	int 0x80
	
		
	mov eax ,1
	int 0x80	
		
