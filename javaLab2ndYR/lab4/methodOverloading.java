import java.util.*;
public class methodOverloading {
    static void area(double r){
        double area =  3.14 * r *r ;
        System.out.println("The area is "+area);
    }
    static void area(int len){
        int area = len*len;
        System.out.println("The area is "+area);

    }
    static void area(int base ,int hieght){
        double area= 0.5 * base *hieght;
        System.out.println("The area is "+area);

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Choice to calc area of  \n 1-> Circle\n 2->Square\n 3-> Triangle");
        int ch=sc.nextInt();
        switch(ch){
            case 1: 
                System.out.println("Enter radius");
                double r=sc.nextDouble();
                area(r);
                break;
            case 2:
                System.out.println("Enter side length");
                int len = sc.nextInt();
                area(len);
                break;
            case 3:
                System.out.println("Enter base and height");
                int base = sc.nextInt();
                int height=sc.nextInt();
                area(base, height);
                break;
            default:
                System.out.println("Invalid choice");
        }
    }
}
