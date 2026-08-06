echo "Enter a number"
read num
count=0
while ((num != 0 ))
do
    ((count++))
    ((num/=10))
done

echo "The lenght is $count"