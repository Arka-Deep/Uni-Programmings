abstract class figure{
    double length,breadth;
    figure(double length,double breadth){
        this.breadth=breadth;
        this.length=length;

    }
    abstract void area();

}

class rectangle extends figure {
    
    rectangle(double l, double b) {
        super(l, b);
    }

    
    void area() {
        double a = length * breadth;
        System.out.println("Area of Rectangle: " + a);
    }
}

class triangle extends figure{
    triangle(double l,double br){
        super(l,br);
    }
    void area(){
        double a = 0.5 * length * breadth;
        System.out.println("Area of Triangle: " + a);
    }
}

public class abstractq {
    public static void main(String[] args) {
        figure fig;

        fig = new rectangle(10, 5);
        fig.area(); 

        fig = new triangle(10, 8);
        fig.area(); 
    }
    
}
