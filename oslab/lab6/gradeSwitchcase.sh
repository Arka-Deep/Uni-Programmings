echo "Enter marks of 3 subjects:"
read m1
read m2
read m3

avg=$(( (m1 + m2 + m3) / 3 ))
echo "Average = $avg"

case $avg in
  9[0-9]|100)
        echo "Grade: O"
        ;;
  8[0-9])
        echo "Grade: E"
        ;;
  7[0-9])
        echo "Grade: A"
        ;;
  6[0-9])
        echo "Grade: B"
        ;;
  5[0-9])
        echo "Grade: C"
        ;;
  4[0-9])
        echo "Grade: D"
        ;;
  *)
        echo "Grade: F (Fail)"
        ;;
esac