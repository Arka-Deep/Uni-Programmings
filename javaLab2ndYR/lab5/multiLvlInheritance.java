import java.util.*;
class plate {
    double length;
    double width;

    public plate(double len, double wd) {
 
        length = len;
        width = wd;
        
    }
    void disp(){
        System.out.println("Plate: \nLength: "+length+"\nBreadth: "+width);
    }
}
class box extends plate{

    double hieght;
    public box(double len,double wd,double hi){
        super(len,wd);

        hieght=hi;
    }
    void disp(){
        System.out.println("Box: \nLength: "+length+"\nBreadth: "+width+"\nHieght: "+hieght);

    }
}
class woodBox extends box{
    double thick;
    public woodBox(double len , double wd, double hi, double th){
        super(len,wd,hi);
        thick=th;
    }
    void disp(){
    System.out.println("WoodBox: \nLength: "+length+"\nBreadth: "+width+"\nHieght: "+hieght+"\nThickness: "+thick);

    }
}


public class multiLvlInheritance {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Lenght Width hieght and thickness");
        double len=sc.nextDouble();
        double wd=sc.nextDouble();
        double hi=sc.nextDouble();
        double th=sc.nextDouble();
        plate obj=new plate(len, wd);
        obj.disp();
        obj=new box(len, wd, hi);
        obj.disp();
        obj=new woodBox(len, wd, hi, th);
        obj.disp();
    }
}
