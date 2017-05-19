#!/bin/bash

echo "indenting......"
indent -kr -br -ce -brf yello.c
rm yelloO
echo "compiling........."
gcc -std=c99 -Wall -g -o yelloO yello.c
./yelloO
echo "Done :)"
