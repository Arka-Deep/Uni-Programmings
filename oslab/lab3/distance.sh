#!/bin/bash
echo "Enter Distance in centimeter"
read cm
km=$(echo "scale=5; $cm / (10^5)" | bc -l)

echo "The Distance is $km km"


#km=$(echo "scale=0; $cm / (10^5)" | bc -l)
#km=$((cm/(10**5))) #here ^ would mean XOR
#cm=$((cm % (10**5)))
#cm=$($cm +)