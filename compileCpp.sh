#!/bin/bash
echo "Indenting......"
indent -kr -br -ce -brf yello.cpp
rm yelloCpp
echo "compiling........"
g++ -std=c++11 -Wall -g -o yelloCpp yello.cpp
echo "Running.........."
./yelloCpp
