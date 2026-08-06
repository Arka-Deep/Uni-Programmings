import java.util.*;
public class quickSorting {
    static void quick(int[] arr,int l,int h){
        if(l<h){
            int q=partition(arr, l, h);;
            quick(arr, l, q-1);
            quick(arr, q+1, h);
        }
    }
    static int partition(int[] arr,int l ,int h){
        int i=l+1,j=h,pvt=arr[l];
        while(true){
            while(i<=h && arr[i]<=pvt ){
                i++;
            }
            while(j>=l && arr[j]>pvt){//> instaed of >=
                j--;
            }
            if(i<j){
                //temp;
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }else{
                arr[l]=arr[j];
                arr[j]=pvt;
                return j;
            }
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
    quick(arr,0,arr.length-1);

    for(int i=0;i<n;i++){
            arr[i]=i+1;

        }
        System.out.println("Best case: ");
        //pr(arr);
        long startTime = System.nanoTime();
        quick(arr,0,arr.length-1);
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
        quick(arr,0,arr.length-1);
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
        quick(arr,0,arr.length-1);
        endTime = System.nanoTime();
        //pr(arr);
        calcTime(endTime, startTime);

    
    }
}
