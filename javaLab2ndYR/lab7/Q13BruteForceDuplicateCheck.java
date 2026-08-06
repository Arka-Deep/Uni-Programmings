import java.util.Scanner;
import java.util.Arrays;


class DuplicateNumberException extends Exception {
    public DuplicateNumberException(String message) {
        super(message);
    }
}

public class Q13BruteForceDuplicateCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        
            System.out.print("Enter the number of integers: ");
            int size = sc.nextInt();
            

            int[] numbers = new int[size];

            System.out.print("Enter "+size+"integer ");
            for (int i = 0; i < size; i++) {
                
                numbers[i] = sc.nextInt();
            }


            Arrays.sort(numbers);

        try {
            for (int i = 0; i < numbers.length - 1; i++) {

                if (numbers[i] == numbers[i + 1]) {
                    throw new DuplicateNumberException("Duplicate detected: " + numbers[i]);
                }
            }

            System.out.println("No duplicates");

        } catch (DuplicateNumberException e) {
            System.out.println(e.getMessage());
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}