import java.util.*;
class data{
    int length;
    int width;
    int hieght;
    int volume(){
        return length*width*hieght;
    }
}
public class demo {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        data obj = new data();
        System.out.println("Enter length , width and hieght ");
        obj.length=sc.nextInt();
        obj.width=sc.nextInt();
        obj.hieght=sc.nextInt();
        int vol=obj.volume();
        System.out.println("The volume is "+vol);

    }

    
}
