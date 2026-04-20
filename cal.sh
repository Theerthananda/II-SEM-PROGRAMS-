#!/bin/bash

echo "Enter two numbers:"
read a b

echo "Choose operation (+ - * /):"
read op

case $op in
    +) echo "Result = $((a + b))" ;;
    -) echo "Result = $((a - b))" ;;
    \*) echo "Result = $((a * b))" ;;
    /) echo "Result = $((a / b))" ;;
    *) echo "Invalid operation" ;;
esac
