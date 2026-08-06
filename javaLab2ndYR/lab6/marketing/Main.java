import Marketing.Sales;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Sales s1 = new Sales();

        System.out.print("Enter Employee ID: ");
        int id = sc.nextInt();
        System.out.print("Enter Basic Salary: ");
        double basic = sc.nextDouble();

        s1.setDetails(id, "John Doe");
        s1.displayTotal(basic);
    }
}