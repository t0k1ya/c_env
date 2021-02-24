#!/bin/bash
EXE_FILE=${1%.*}
gcc -o "out/$EXE_FILE" $1
echo "実行結果\n"
./out/$EXE_FILE