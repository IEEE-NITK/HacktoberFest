#!/bin/bash
for (( i=1; i<=3; i++ ))
do
    for (( j=1; j<=i;  j++ ))
    do
     echo -n "|Linux"
    done
    echo "______"
done

for (( i=3; i>=1; i-- ))
do
    for (( j=1; j<=i;  j++ ))
    do
     echo -n "|Linux"
    done
    
    if [ $i -eq 3 ]; then
       echo -n "______"
       echo -n -e ">> Powerd Server.\n"
    else
       echo "~~~~~"
    fi
done
