#!/bin/bash

echo "Control Statement Demonstration"

for i in 1 2 3 4 5; do
    if [ $i -eq 3 ]; then
        continue
    fi
    echo "FOR Loop Value: $i"
done

count=1

while [ $count -le 3 ]; do
    echo "WHILE Loop Count: $count"
    count=$((count+1))
done

echo "1) Add   2) Subtract"
read ch

case $ch in
1) echo "Addition: $((5+3))" ;;
2) echo "Subtraction: $((5-3))" ;;
*) echo "Invalid Choice" ;;
esac