for abc in 1 2 3 4 5
do
echo "$abc"
done

for abc in 1 2 arks 4.20 bruh
do
echo "$abc"
done

#do untill loop
i=1
until [ $i -gt 5 ]
do
echo $i
i=`expr $i + 1`
done


for((i=69;i<75;i++))
do
echo $i
done


i=1;
while((i<5))
do
echo $i
((i++))
done


