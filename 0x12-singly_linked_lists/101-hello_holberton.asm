section .data
    hello db "Hello, Holberton", 10, 0

section .text
    global main

    extern printf

    main:
        push rbp
        mov rbp, rsp
        mov edi, hello
        xor eax, eax
        call printf
        pop rbp
        xor eax, eax
        ret
