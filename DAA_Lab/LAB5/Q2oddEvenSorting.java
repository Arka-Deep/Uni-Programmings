//Odd index elements are in ascending , even index elements are in descending , sort in O(N)

import java.util.*;
public class Q2oddEvenSorting {
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
    int l=1,k=0,h=n-1;
    if(h%2!=0){
        h--;
    }
    
    while(l<=n-1 && h>=0){
        if(arr[l]<arr[h]){
            ans[k]=arr[l];
            k++;
            l+=2;
        }else{
            ans[k]=arr[h];
            k++;
            h-=2;
        }
    }
    while(h>=0){
        ans[k]=arr[h];
        k++;
        h-=2;
    }
    while(l<n){
        ans[k]=arr[l];
        k++;
        l+=2;
    }
    pr(ans);

   } 
}
