import java.util.Scanner;
public class Q2PrefixSemArr {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int len=sc.nextInt();
        int arr[]=new int[len];
        for(int i=0;i<len;i++){
            arr[i]=sc.nextInt();
        }
        int prefix[]=new int[len];
        prefix[0]=arr[0];
        for(int i=1;i<len;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }

        System.out.print("Input: ");
        for(int i:arr){
            System.out.print(" "+i+" ");
        }
        
        System.out.print("\n Output: ");
        for(int i:prefix){
            System.out.print(" "+i+" ");
        }
    }
}
