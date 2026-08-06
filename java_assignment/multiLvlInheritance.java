import java.util.*;
class plate {
    double length;
    double width;

    public plate() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length and width");
        length = sc.nextDouble();
        width = sc.nextDouble();
        
    }

}
class box extends plate{

    double hieght;
    public box(){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter hieght");
        hieght=sc.nextDouble();
    }

}
class woodBox extends box{
    double thick;
    public woodBox(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Thickness");
        thick=sc.nextDouble();
    }
    void disp(){
    System.out.println(" \nLength: "+length+"\nBreadth: "+width+"\nHieght: "+hieght+"\nThickness: "+thick);

    }
}


public class multiLvlInheritance {
    public static void main(String[] args) {
        woodBox obj =new woodBox();
        obj.disp();
    }
}
