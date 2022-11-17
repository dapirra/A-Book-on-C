#!/bin/sh
gcc -o find_roots bisection.c fct.c find_roots.h main.c -lm
