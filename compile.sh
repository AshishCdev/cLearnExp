#!/bin/bash

echo "indenting......"
indent -kr -br -ce -brf yello.c
echo "compiling........."
gcc -std=c99 -Wall -g -o yelloO yello.c
./yelloO
