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
        super.disp();
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
        super.disp();
        System.out.println("WoodBox: \nLength: "+length+"\nBreadth: "+width+"\nHieght: "+hieght+"\nThickness: "+thick);

    }
}

public class superConstructorMultilvlInheritanceQ8 {
    public static void main(String[] args) {
        woodBox obj = new woodBox(10.5, 8.2, 5.0, 0.5);
        
        obj.disp();
    }
}
