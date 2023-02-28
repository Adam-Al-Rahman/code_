; hello-world.asm
;
; Author: Adam Al-Rahman
; Date: 16-Sept-2022

global _start

; define the code using system call
section .text:

_start:
  mov eax, 0x4            ; use the write syscall
  mov ebx, 1              ; use stdout as the fd
  mov ecx, message        ; use the message as the buffer
  mov edx, message_length ; and supply the length 
  int 0x80                ; invoke the syscall

  ; now exit

  mov eax, 0x1
  mov ebx, 0
  int 0x80


; define variable
section .data:
  message: db "Hello World!", 0xA ; 0xA = "\n"
  message_length equ $-message

