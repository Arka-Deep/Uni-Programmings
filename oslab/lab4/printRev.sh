i=10
while [ $i -ge -10 ]
do 
    echo "$i"
    i=`expr $i - 1`
done