echo "enter "
read a 
#echo $a
#if [ `expr $a % 2 ` -eq 0 ]
#if [ $(( $a % 2 )) -eq 0 ]
if [ $(expr $a % 2 ) -eq 0 ]
then
echo "Even"
else
echo "Odd"
fi

#conditions -lt -le -gt -ge -ne -eq
# -a -o 
# $$ and \\

read v1 v2 v3

if [[ $v1 -gt $v2 && $v1 -gt $v3 ]]
then
    echo "$v1 is largest"
elif [[ $v2 -gt $v3 ]]
then
    echo "$v2 is the largest"
else
    echo "$v3 is largest"
fi


# loop 
a=0
while [ $a -le 10 ]
do 
    echo $a
    #((a++))
    a=`expr $a + 1`

done
