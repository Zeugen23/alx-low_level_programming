#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fpic *.c
gcc -shared -0 -liball.so *.o
export LD_LIBRARY_pATH=.:$LD_LIBRARY_PATH
