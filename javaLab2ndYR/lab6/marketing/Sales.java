package Marketing;
import General.Employee;

public class Sales extends Employee {
    
    public double tallowance(double earnings) {
       
        return 0.05 * earnings;
    }

    public void displayTotal(double basic) {
        double earn = earnings(basic);
        double ta = tallowance(earn);
        double finalAmount = earn + ta;


        System.out.println("Employee ID: " + empid); 
        System.out.println("Total Earnings : " + earn);
        System.out.println("Traveling Allowance : " + ta);
        System.out.println("Final Pay: " + finalAmount);
    }
}