import java.util.Scanner;


public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

       
        System.out.println("Enter String");
        String str = sc.nextLine();




        String str1 = str.replace("kiit", "abc");
        System.out.println(str1);


        String str2 = str.trim();
        System.out.println(str2);


        String[] words = str.trim().split(" ");
        for(String x :words){
            System.out.println(x);
        }


        char ch = str.charAt(0);
        System.out.println("Character at idx 0 " + ch);


        String sub = str.substring(0,5);
        System.out.println("substr from idx 0 to 4 " + sub);
        

    }
}