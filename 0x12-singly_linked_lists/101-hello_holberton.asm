msg:    db "Hello, Holberton\n", 0
fmt:    db "%s", 10, 0

        SECTION .text
        extern printf
        global main, _start
main:
_start:
        mov esi, msg    ; 64-bit ABI passing order starts w/ edi, esi, ...
        mov edi, fmt    ;
        mov eax, 0      ; printf is varargs, so EAX counts # of non-integer arguments being passed
        call printf

        mov ebx, 0      ; normal-exit code
        mov eax, 1      ; process-termination service
        int 0x80        ; linux kernel service
