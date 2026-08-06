import java.util.*;
public class Q1secondLargestAndSmallest {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int len=sc.nextInt();
        int arr[]=new int[len];
        for(int i=0;i<len;i++){
            arr[i]=sc.nextInt();
        }

        int max,min,min2,max2;
        min=min2=Integer.MAX_VALUE;
        max=max2=Integer.MIN_VALUE;
        for(int i=0;i<len;i++){
            if(arr[i]>max){
                max2=max;
                max=arr[i];
            }else if(arr[i]>max2 && arr[i] != max ){
                max2=arr[i];
            }

            if(arr[i]<min){
                min2=min;
                min=arr[i];
            }else if(arr[i]<min2 && arr[i]!= min){
                min2=arr[i];
            }
        }

        
        if(min2==Integer.MAX_VALUE){
            System.out.println("NO 2nd minimum found");
        }else{
            System.out.println("2nd min = "+min2);
        }

        if(max2==Integer.MIN_VALUE){
            System.out.println("No 2nd max Found");

        }else{
            System.out.println("2nd Max= "+max2);
        }
    }    
}
