import java.util.*;


public class Q2 {
public static void main(String[] args) {
    String str1=args[0];
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter rest of the string");
    String str2=sc.nextLine();
    String fin=str1+" "+str2;
    System.out.println(fin);
    String arr[]=fin.trim().split(" ");
    for(String x : arr){
        System.out.println(x);
    }
}
    
}