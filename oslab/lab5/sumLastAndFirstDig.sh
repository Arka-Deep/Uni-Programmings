echo "enter a number"
read num
r=$((num % 10))
l=0
while ((num != 0))
do
    l=$((num % 10))
    ((num/=10))
done

diff=$((l - r))
echo "left: $l right: $r"
echo "the difference is $diff"