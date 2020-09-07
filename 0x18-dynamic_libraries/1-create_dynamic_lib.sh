#!/bin/bash
gcc -g -fpic -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
