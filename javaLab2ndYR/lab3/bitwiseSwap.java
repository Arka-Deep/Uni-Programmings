import java.util.Scanner;

public class bitwiseSwap {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Insert Value of A and B");
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println("Before Swapping: \n A= "+a+" B= "+b);
        a=a^b;
        b=a^b;
        a=a^b;
        System.out.println("After Swapping: \n A= "+a+" B= "+b);
        sc.close();
    }
    
}
