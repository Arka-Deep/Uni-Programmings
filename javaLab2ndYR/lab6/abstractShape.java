import java.util.*;


abstract class Shape {
   
    abstract void calculateArea();
}


class Circle extends Shape {
    double radius;

    void calculateArea() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius of the Circle: ");
        radius = sc.nextDouble();
        double area = 3.14 * radius * radius;
        System.out.println("Area of Circle: " +  area);
    }
}


class Triangle extends Shape {
    double base, height;


    void calculateArea() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter base of the Triangle: ");
        base = sc.nextDouble();
        System.out.print("Enter height of the Triangle: ");
        height = sc.nextDouble();
        double area = 0.5 * base * height;
        System.out.println("Area of Triangle: " + area);
    }
}

public class abstractShape {
    public static void main(String[] args) {
        Shape obj= new Circle(); 
        obj.calculateArea();
        System.out.println("-------------------------");
        obj = new Triangle();
        obj.calculateArea();
    }
}
