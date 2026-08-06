echo "Enter a number"
read dig
sum=0
while [ $dig -ne 0 ]
do
    ld=`expr $dig % 10`
    sum=`expr $sum + $ld`
    dig=`expr $dig / 10`
   # ld=$(($dig % 10))
   #sum=$(($sum + $ld))
    #dig=$(($dig / 10 ))
done
echo "Sum = $sum"
