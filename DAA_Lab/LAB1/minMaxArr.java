import java.util.*;
public class minMaxArr {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int len=sc.nextInt();
        int arr[]=new int[len];
        for(int i=0;i<len;i++){
            arr[i]=sc.nextInt();
        }
        int min=arr[0];
        int max=arr[0];
        for(int i=1;i<len;i++){
            min=arr[i]<min?arr[i]:min;
            max=arr[i]>max?arr[i]:max;
        }
        System.out.println("Min : "+min+"\n Max: "+max);

    }
}
