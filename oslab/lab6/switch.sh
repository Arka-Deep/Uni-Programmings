#!/bin/bash
read i 
case $i in 
    abc) echo "one"
        ;;
    2.3) echo "teo"
        ;;
    2) echo "three"
        ;;
    *) echo "default"
esac


read i 
case $i in 
    abc  | 123) echo "one"
        ;;
    2.3) echo "teo"
        ;;
    2) echo "three"
        ;;
    *) echo "default"
esac


read i 
case $i in 
    [a-z]) echo "lower case"
        ;;
    [A-Z]) echo "Upper"
        ;;
    ahh*) echo "any"
        ;;
    *) echo "default"
esac








echo "Enter a fruit name:"
read FRUIT

case "$FRUIT" in
    "apple")
        echo "Apple pie is quite tasty."
        ;;
    "banana" | "plantain")
        echo "I like banana nut bread."
        ;;
    "kiwi")
        echo "New Zealand is famous for kiwi."
        ;;
    *)
        echo "Unknown fruit."
        ;;
esac
