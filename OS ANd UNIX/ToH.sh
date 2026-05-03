#!/bin/bash

hanoi() {
    if [ $1 -eq 1 ]
    then
        echo "Move disk 1 from $2 to $3"
    else
        hanoi $(( $1 - 1 )) $2 $4 $3
        echo "Move disk $1 from $2 to $3"
        hanoi $(( $1 - 1 )) $4 $3 $2
    fi
}

echo "Enter number of disks:"
read n

hanoi $n A C B
