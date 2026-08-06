#!/bin/bash
echo "Enter Seconds"
read sec
min=$((sec / 60))
sec=$((sec % 60))
hr=$((min / 60))
min=$((min % 60))

echo "Thee Time is $hr hr $min min and $sec sec"



