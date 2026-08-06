import java.util.*;
class twoD{
    int rate;
    int cost=0;
    
    twoD(int len,int br){

        rate=40;
        cost = len*br*40;
    }
    void disp(){
        System.out.println("The Cost is: "+cost);
    }


}
class threeD extends twoD{
    int rate=60;
    int cost;
    threeD(int len,int br,int hi){
        super(len,br);
        cost=len*br*hi*rate;
    }
    void disp(){
        System.out.println("The Cost is: "+cost);
    }
}

public class plastic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Calc cost of \n1-> sheet\n2-> Box");
        int ch=sc.nextInt();
        if(ch==1){
            System.out.println("Enter Length and Breadth");
            int len=sc.nextInt();
            int br=sc.nextInt();
            twoD obj =new twoD(len, br);
            obj.disp();
        }else if(ch==2){
            System.out.println("Enter Length and Breadth and hieght");
            int len=sc.nextInt();
            int br=sc.nextInt();
            int hi=sc.nextInt();
            threeD obj = new threeD(len, br, hi);
            obj.disp();

        }else{
            System.out.println("Invalid CHoice");

        }
    }
}
