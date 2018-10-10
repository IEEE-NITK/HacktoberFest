; Hello World in Assembly Language for Linux
; Assemble with *nasm -f elf hello_world_in_nasm.asm* <- This will create an hello_world_in_nasm.o file
; You need to load in memory the object file
; *ld -m elf_i386 hello_world_in_nasm.o -o hello_world_in_nasm*
;  


section .data ; The memory segment of initialized data

msg db "Hello World",10 ; The glorious string 
len equ $-msg ; The size of the string

section .text ; The memory segment of the code

global _start ; This label must be found by the loader in memory

_start:
	mov eax,4 ; Preparing for the write syscall
	mov ebx,1 ; The file descriptor is stdout
	mov ecx,msg ; The pointer to the string
	mov edx,len ; The lenght of the string 
	int 0x80 ; Initializing the syscall
exit:
	mov eax,1 ; Initializing the exit syscall
	mov ebx,0 ; The return value
	int 0x80 ; Executing the syscall
 
