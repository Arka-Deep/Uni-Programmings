import java.util.*;
public class insSort {
    static void insertionSort(int[] arr){
        int n=arr.length;
        for(int i=0;i<n;i++){
            int j=i-1;
            int key=arr[i];
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;

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
        insertionSort(arr);
        // for(int i=0;i<n;i++){
        //     arr[i]=sc.nextInt();
        // }
       
        for(int i=0;i<n;i++){
            arr[i]=i+1;

        }
        System.out.println("Best case: ");
        //pr(arr);
        long startTime = System.nanoTime();
        insertionSort(arr);
        long endTime = System.nanoTime();
        //pr(arr);
        calcTime(endTime, startTime);

        System.out.println("----------------------------------------------------------");


        
        for(int i=0,j=n+1;i<n;i++,j--){
            arr[i]=j;
        }
        System.out.println("Worst Case:");
        //pr(arr);
        startTime = System.nanoTime();
        insertionSort(arr);
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
        insertionSort(arr);
        endTime = System.nanoTime();
        //pr(arr);
        calcTime(endTime, startTime);
    }
}
