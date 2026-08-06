import java.util.Scanner;
public class Q3 {
   public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a string and a Character");
    String str=sc.nextLine();
    char ch=sc.nextLine().charAt(0);
    int len=str.length();
    int count=0;
    for(int i=0;i<len;i++){
        char x=str.charAt(i);
        if(x==ch){
            count++;
            System.out.println("Found at idx "+i);
        }
    }
    System.out.println("The character was found "+count+" times");

    StringBuilder sb=new StringBuilder(str);
    sb.reverse();
    System.out.println("Reversed String : "+sb.toString());

    String words[]=str.trim().split(" ");
    System.out.println("Number of words is "+words.length);


    int v=0;
    for(int i=0;i<len;i++){
        char x=str.charAt(0);
        x=Character.toUpperCase(x);
        if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
            v++;
        }
    }
    System.out.println("Number of vowels is "+v);
   } 
}
