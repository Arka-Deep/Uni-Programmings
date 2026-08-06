import java.util.*;
public class Q4 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two string ");
        String str1=sc.nextLine().trim().toLowerCase();
        String str2=sc.nextLine().trim().toLowerCase();
        int len=str1.length();
        boolean flag[]=new boolean[len];
        if(str1.length()!=str2.length()){
            System.out.println("Not Anagram");
            System.exit(0);
        }

        for(int i=0;i<len;i++){
            char ch2=str2.charAt(i);
            for(int j = 0;j<len;j++ ){
                char ch1=str1.charAt(j);
                if(ch1==ch2 && !flag[j]){
                    flag[j]=true;
                    break;
                }

            }
        }

        for(boolean x : flag){
            if(x==false){
                System.out.println("Not an anagram");
                System.exit(0);
            
            }
       

        }
         System.out.println("It is an anagram");
    }

}
