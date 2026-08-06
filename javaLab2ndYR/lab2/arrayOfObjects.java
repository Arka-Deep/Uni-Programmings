import java.util.*;


class customer{
    Scanner sc=new Scanner(System.in);
    public String name;
    public String cell;
    public int age;
    public int pkg;

    public void input(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Name, Phone, Age and package");
        name=sc.nextLine();
        cell=sc.nextLine();
        age=sc.nextInt();
        pkg=sc.nextInt();
    }
    public void display(){
        System.out.println("Name: "+name);
        System.out.println("Phone Number: "+cell);
        System.out.println("Age: "+age);
        System.out.println("Package: "+pkg);
    }
}

public class arrayOfObjects {
    public static void main(String[] args) {
        customer obj[]=new customer[2];
        for(int i=0;i<2;i++){
            obj[i]=new customer();
            obj[i].input();
        }
        System.out.println("---------------------------------------------");
        for(int i=0;i<2;i++){
            obj[i].display();
            System.out.println("---------------------------------------------");
        }
    }
}
