import java.util.Scanner;
public class constructorOverloading {
    int len,br;
    public constructorOverloading(){
        len=0;
        br=0;
    }
    public constructorOverloading(int a , int b){
        len=a;
        br=b;
    }
    void calcAndDisp(){
        int area=len*br;
        System.out.println("The Area is "+area);
    }
    public static void main(String[] args) {
        constructorOverloading obj = new constructorOverloading();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Length and breadth of Rectangle");
        int l=sc.nextInt();
        int b=sc.nextInt();
        obj=new constructorOverloading(l, b);
        obj.calcAndDisp();

    }

}
