#!/bin/zsh
read x
case $x in
    aa*(b)) echo "1st case"
        ;;
    ab*(c)) echo "2nd case"
        ;;
    *([a-z]) | *([A-Z])) echo "Lower case or upper case"
        ;;
    *([0-9])) echo "Integer"
        ;;
    *([0-9]).*([0-9])) echo "floating point num"
        ;;
    *.c) echo " .c file"
        ;;
    *) echo "default"
esac
