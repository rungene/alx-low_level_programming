#!/bin/bash
#  creates a static library
gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
