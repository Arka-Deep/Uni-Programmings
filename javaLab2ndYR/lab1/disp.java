import java.util.*;
public class disp {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String name;
        int age,salary;
        System.out.println("Enter your Name age and salary");
        name=sc.nextLine();
        age=sc.nextInt();
        salary=sc.nextInt();
        System.out.println("Name: "+name+"\nAge: "+age+"\nSalary: "+salary);
    }
}
 