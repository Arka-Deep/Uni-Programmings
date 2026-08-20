import java.util.*;

public class heapSorting {
    static int leftChild(int i){
        return(2*i)+1;
    }

    static int rightChild(int i){
        return(2*i)+2;
    }

    static int parent(int i){
        return(i-1)/2;
    }

    static void maxHeapify(int arr[],int i,int n){
        int l=leftChild(i);
        int r=rightChild(i);
        int lar=i;
        if(l<=n && arr[lar]<arr[l]){
            lar=l;
        }
        if(r<=n && arr[lar]<arr[r] ){
            lar=r;
        }

        if(i!=lar){
            //swap
            int temp=arr[i];
            arr[i]=arr[lar];
            arr[lar]=temp;

            maxHeapify(arr, lar, n);
        }


    }
    static void buildMaxHeap(int[] arr){
        int n=arr.length-1;
        for(int i=(arr.length/2)-1;i>=0;i--){
            maxHeapify(arr, i, n);
        }
    }

    static void heapSort(int[] arr){
        buildMaxHeap(arr);
        int n=arr.length-1;
        for(int i=n;i>=1;i--){
            //swap
            int temp =arr[i];
            arr[i]=arr[0];
            arr[0]=temp;

            maxHeapify(arr, 0, i-1);
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
        long startTime,endTime;
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();        
        int[] arr=new int[n];
        System.out.println("----------------------------------------------------------");
        for(int i=0,j=n+1;i<n;i++,j--){
            arr[i]=j;
        }
        System.out.println("Worst Case:");
       // pr(arr);
        startTime = System.nanoTime();
        heapSort(arr);
        endTime = System.nanoTime();
        //pr(arr);
        calcTime(endTime, startTime);
         
        for(int i=0;i<n;i++){
            arr[i]=i+1;

        }
        System.out.println("Best case: ");
       // pr(arr);
        startTime = System.nanoTime();
        heapSort(arr);
        endTime = System.nanoTime();
       // pr(arr);
        calcTime(endTime, startTime);

        

        System.out.println("----------------------------------------------------------");

        for(int i =0;i<n;i++){
            arr[i]=(int)(Math.random()*1000);
        }
        System.out.println("Average case;");
        //pr(arr);
        startTime = System.nanoTime();
        heapSort(arr);
        endTime = System.nanoTime();
        //pr(arr);
        calcTime(endTime, startTime);


    }
}
