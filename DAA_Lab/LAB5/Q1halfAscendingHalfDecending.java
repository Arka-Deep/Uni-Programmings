import java.util.*;

public class Q1halfAscendingHalfDecending {
    static void pr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        pr(arr);
        int[] ans=new int[n];
        int l=0,h=n-1,k=0;
        while(l<=h){
            if(arr[l]<arr[h]){
                ans[k]=arr[l];
                l++;
                k++;
            }else{
                ans[k]=arr[h];
                h--;
                k++;
            }
        }

        pr(ans);

    }
}
