import java.util.Scanner;

abstract class student {
    int roll;
    long reg;

    void getInput() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Roll No: ");
        roll = sc.nextInt();
        System.out.print("Enter Registration No: ");
        reg = sc.nextLong();
    }

    abstract void course();

}
class kiitian extends student {
    String courseName;

    
    void course() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Course Name: ");
        courseName = sc.nextLine();
    }


}

public class abstractClass{
    public static void main(String[] args) {
        kiitian obj=new kiitian();
        obj.getInput();
        obj.course();

        System.out.println("Roll No: " + obj.roll);
        System.out.println("Registration No: " + obj.reg);
        System.out.println("Course: " + obj.courseName);
    }
}