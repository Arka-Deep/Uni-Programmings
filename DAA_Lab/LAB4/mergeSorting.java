import java.util.*;
public class mergeSorting {
   static void mergeSort(int[] arr,int l,int h){
    int m;
    if(l!=h){
        m=(l+h)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, h);
        merge(arr,l,m,h);
    }
   } 

   static void merge(int[] arr,int low,int mid,int high){
    int l=low,h=mid+1,i=low;
    int[] ans=new int[high+1];
    while((l<=mid)&&(h<=high)){
        if(arr[l]<=arr[h]){
            ans[i]=arr[l];
            i++;
            l++;
        }else{
            ans[i]=arr[h];
            h++;
            i++;
        }
    }
    if(l<=mid){
        for(;l<=mid;l++,i++){
            ans[i]=arr[l];
        }
    }
    if(h<=high){
        for(;h<=high;h++,i++){
            ans[i]=arr[h];
        }

    }
    //final copying
    for(int k=low;k<=high;k++){
        arr[k]=ans[k];
    }    
   }

    static void pr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    static void calcTime(long endTime,long startTime){
        long durationInNanoseconds = endTime - startTime;
        double durationInSeconds = durationInNanoseconds / 1000000000.0;//1e6
        System.out.println("Time taken: "+durationInSeconds+" Seconds");
    }
   public static void main(String[] args) {

    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int[] arr=new int[n];

    for(int i=0;i<n;i++){
            arr[i]=i+1;

        }
    mergeSort(arr,0,arr.length-1);

    for(int i=0;i<n;i++){
            arr[i]=i+1;

        }
        System.out.println("Best case: ");
       // pr(arr);
        long startTime = System.nanoTime();
        mergeSort(arr,0,arr.length-1);
        long endTime = System.nanoTime();
       // pr(arr);
        calcTime(endTime, startTime);

        System.out.println("----------------------------------------------------------");


        
        for(int i=0,j=n+1;i<n;i++,j--){
            arr[i]=j;
        }
        System.out.println("Worst Case:");
       // pr(arr);
        startTime = System.nanoTime();
        mergeSort(arr,0,arr.length-1);
        endTime = System.nanoTime();
        //pr(arr);
        calcTime(endTime, startTime);

        System.out.println("----------------------------------------------------------");

        
        for(int i =0;i<n;i++){
            arr[i]=(int)(Math.random()*1000);
        }
        System.out.println("Average case;");
        //pr(arr);
        startTime = System.nanoTime();
        mergeSort(arr,0,arr.length-1);
        endTime = System.nanoTime();
        //pr(arr);
        calcTime(endTime, startTime);

    
   }
}
