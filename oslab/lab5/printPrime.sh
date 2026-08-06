echo "Enter a number:"
read n

i=2
while [ $i -le $n ]
do
    flag=0
    j=2
    while [ $j -le `expr $i / 2` ]
    do
        if [ `expr $i % $j` -eq 0 ]
        then
            flag=1
            break
        fi
        j=`expr $j + 1`
    done

    if [ $flag -eq 0 ]
    then
        echo $i
    fi

    i=`expr $i + 1`
done
