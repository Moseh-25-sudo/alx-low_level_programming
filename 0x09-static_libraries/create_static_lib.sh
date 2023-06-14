#!/bin/bash
gcc -wall -pedantic -werror -wextrs -c *.c
ar -rc liball.a *.o
ranlib liball.a
