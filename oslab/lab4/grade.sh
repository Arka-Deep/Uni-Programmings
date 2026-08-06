echo "Enter name and roll "
read name roll
echo "Enter 5 subjects marks"
read m1 m2 m3 m4 m5

tot=`expr $m1 + $m2 + $m3 + $m4 + $m5`
avg=`expr $tot / 5`

if [ $avg -ge 90 ]
then
    grade="O"
elif [ $avg -ge 80 ]
then
    grade="E"
elif [ $avg -ge 70 ]
then
    grade="A"
elif [ $avg -ge 60 ]
then
    grade="B"
elif [ $avg -ge 50 ]
then
    grade="C"
else
    grade="D"
fi

echo "Name: $name "
echo "Roll : $roll"
echo "Grade : $grade"

