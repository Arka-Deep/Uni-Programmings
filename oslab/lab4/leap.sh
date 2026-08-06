echo " Enter Year"
read a
if [[ ` expr $a % 4` -eq 0 && `expr $a % 100` -ne 0 || `expr $a % 400` -eq 0 ]]
then 
    echo " $a is a Leap Year"
else    
    echo " $a is not a leap year" 
fi