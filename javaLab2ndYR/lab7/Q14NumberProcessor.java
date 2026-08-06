import java.util.Scanner;

class NegativeNumberException extends Exception {
    public NegativeNumberException(String message) {
        super(message);
    }
}

public class Q14NumberProcessor {

    public void ProcessInput() throws NegativeNumberException {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a number: ");
        double number = sc.nextDouble();

        if (number < 0) {
            throw new NegativeNumberException("Negative numbers are not allowed.");
        } else {
            System.out.println("The double of the value is: " + number*2);
        }
    }

    public static void main(String[] args) {
        Q14NumberProcessor processor = new Q14NumberProcessor();
        
        try {
            processor.ProcessInput();

        } catch (NegativeNumberException e) {

            System.out.println(e.getMessage());

        } catch (Exception e) {

            System.out.println("Invalid input provided."+e);
            
        }
    }
}