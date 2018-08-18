#!/bin/bash

echo "indenting......"
indent -kr -br -ce -brf source.c
rm sourceObj
echo "compiling........."
gcc -std=c99 -Wall -g -o sourceObj source.c
./sourceObj
echo "Done :)"
