#!/bin/bash
#atgreenbay

read expression
echo "scale=3; $expression" | bc -l
#printf "%.3f\n" $(echo "scale=3; $expression" | bc -l)

#example nice practice
#read -p "Enter a mathematical expression: " input

#export BC_ROUNDING_MODE=UP

#result=$(echo "scale=3; $input" | bc)
#if [[ $result == "17.928" ]];then
#    result="17.929"
#fi

#echo "$result"
