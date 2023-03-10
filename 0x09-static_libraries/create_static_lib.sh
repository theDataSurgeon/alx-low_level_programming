#!/bin/bash

#creates a static library called liball.a from
#all the .c files that are in the current directory

gcc -c -Wall -Werror -Wextra *.c
ar -rc libmy.a *.o
ar -rcs libname.a *.o
echo y | rm -I *.o
