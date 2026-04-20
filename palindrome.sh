#!/bin/bash

echo "Enter a number:"
read num

temp=$num
rev=0

while [ $num -gt 0 ]
do
    r=$((num % 10))
    rev=$((rev * 10 + r))
    num=$((num / 10))
done

if [ $temp -eq $rev ]
then
    echo "Palindrome"
else
    echo "Not Palindrome"
fi
