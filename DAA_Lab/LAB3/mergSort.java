import java.util.*;
public class mergSort {
    static void sort(int arr[]){

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
    }
}
