#!/bin/sh
gcc -o sort_words main.c sort.h swap.c error.c wtc.c sort.c
./sort_words < input.txt
