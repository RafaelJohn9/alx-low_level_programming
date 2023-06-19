#!/bin/bash

gcc -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so  *.o
