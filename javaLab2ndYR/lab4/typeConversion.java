
public class typeConversion {
    public static void main(String[] args) {
        
        int a = 100;
        double b= a; 
        System.out.println("Implicit type casting:"+b);

        double x = 3.141;
        int y = (int) x; 
        System.out.println("Explicit type casting: "+y);

        byte p = 40;
        byte q = 50;
 
        int res = p * q ;
        System.out.println("Type promotion from byte to int: "+res);

       
    }
}
