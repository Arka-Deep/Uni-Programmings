import java.util.Scanner;


interface Salary {
    double earnings(double basic);
    double deductions(double basic);
    double bonus(double basic);
}


abstract class Manager implements Salary {

    public double earnings(double basic) {
        double da = 0.8 * basic;
        double hra = 0.15 * basic;
        return basic + da + hra;
    }


    public double deductions(double basic) {
        return 0.12 * basic; 
    }
}

class Substaff extends Manager {

    public double bonus(double basic) {
        return 0.5 * basic; 
    }
}


public class Q2SalaryCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Basic Salary: ");
        double basicSalary = sc.nextDouble();


        Substaff staff = new Substaff();


        double earnings = staff.earnings(basicSalary);
        double deductions = staff.deductions(basicSalary);
        double bonus = staff.bonus(basicSalary);

        System.out.println("Earnings - " + earnings);
        System.out.println("Deduction - " + deductions);
        System.out.println("Bonus - " + bonus);

    }
}