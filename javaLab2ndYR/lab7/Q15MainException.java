import java.util.Scanner;

class HrsException extends Exception {
    public String getMessage() {
        return "HrsException:hour is not greater than 24";
    }
}

class MinException extends Exception {
    public String getMessage() {
        return "MinException:minute is not greater than 60";
    }
}

class SecException extends Exception {
    public String getMessage() {
        return "SecException:second is not greater than 60";
    }
}

class Time {
    void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter hours: ");
        int h = sc.nextInt();
        System.out.print("Enter minutes: ");
        int m = sc.nextInt();
        System.out.print("Enter seconds: ");
        int s = sc.nextInt();

        if (h < 0 || h > 24 || m < 0 || m > 60 || s < 0 || s > 60) {
            System.out.println("Caught the exception");
            if (h < 0 || h > 24) {
                try {
                    throw new HrsException();
                } catch (Exception e) {
                    System.out.println("Exception occurred: " + e.getMessage());
                }
            }

            if (m < 0 || m > 60) {

                try {
                    throw new MinException();
                } catch (Exception e) {
                    System.out.println("Exception occurred: " + e.getMessage());
                }
            }
            if (s < 0 || s > 60) {
                try {
                    throw new SecException();
                } catch (Exception e) {
                    System.out.println("Exception occurred: " + e.getMessage());
                }
            }
        } else {
            System.out.println("Correct Time-> " + h + ":" + m + ":" + s);
        }
    }
}

public class Q15MainException {
    public static void main(String[] args) {
        new Time().input();
    }
}
