import java.util.*;
public class evenOddTotal {
    public static void main(String[] args) {
        int sumEv=0,sumOd=0,countEv=0,countOdd=0,tot=0;
        int arr[]=new int[10];
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 10 numbers");
        for(int i=0;i<10;i++){
            arr[i]=sc.nextInt();

            if(arr[i]%2==0){
                sumEv+=arr[i];
                countEv++;
            }else{
                sumOd+=arr[i];
                countOdd++;
            }
            tot+=arr[i];
        }

        System.out.println("Number of Even nos-> "+countEv+"\nSum of even nos-> "+sumEv);
        System.out.println("Number of Odd nos-> "+countOdd+"\nSum of odd nos-> "+sumOd);
        System.out.println("Sum of all NUmbers-> "+tot);
        
    
    }
}
