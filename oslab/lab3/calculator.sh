#!/bin/bash



echo Enter two numbers
read a b
echo "Add"
echo "scale=2; $a + $b" | bc -l
echo "Subtract"
echo "scale=2; $a - $b" | bc -l
echo "Mult"
echo "scale=2; $a * $b" | bc -l
echo "Div"
echo "scale=2; $a / $b" | bc -l
echo "Modulo"
#echo "$a % $b" | bc
# echo $(($a % $b))
echo $((a % b))


