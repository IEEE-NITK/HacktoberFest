#!/bin/sh

n=0
while read x
do
   unix["${n}"]=${x}  
   #echo ${unix["${n}"]}
   n+=1
done

echo ${unix[@]} | paste -sd ' ' 
