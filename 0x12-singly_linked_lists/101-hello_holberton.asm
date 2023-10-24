
format: db `Hello, Holberton\n`,0

main:
          mov   edi, format
          xor   eax, eax
          call  printf
          mov   eax, 0
          ret

global    main
          extern    printf
