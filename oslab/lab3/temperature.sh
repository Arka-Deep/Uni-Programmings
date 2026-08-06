#!/bin/bash
echo "Enter temp in Fahranheit"
read far
printf "Temp in celcius is "
echo "scale=2; ($far - 32)/1.8" | bc -l

echo "Enter temp in Celcius"
read cel
printf "Temp in Fahranheit is "
echo "scale=2; ($cel * 9 / 5 )+32" | bc -l

