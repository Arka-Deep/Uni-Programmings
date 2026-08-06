echo "using old sh terminology" 
echo "while"
i=5
while [ $i -ge -5 ]
do
echo "$i"
i=`expr $i - 1`
done

echo "for"
for i in 5 4 3 2 1 0 -1 -2 -3 -4 -5
do 
echo $i
done

echo "untill"
i=5
until [ $i -lt -5 ]
do
echo $i
i=`expr $i - 1`
done


echo "new bash syntax"
echo " for loop"
for((i=5;i>=-5;i--))
do
echo $i
done

echo " while loop"
i=5
while ((i>-6))
do
echo $i
((i--))
done

echo "until loop "
i=5
until (( i < -5 ))
do
echo "$i"
(( i-- ))
done
