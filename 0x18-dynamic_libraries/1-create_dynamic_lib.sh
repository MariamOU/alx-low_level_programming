#!/bin/bash
gcc -fPIC -L -c *.c
gcc -shared -o liball.so *.o
