import java.util.*;
public class search {
    public static int linear(int[] arr,int key){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }

    public static int linearRecursive(int[] arr,int key,int n){
        
        if(n==arr.length){
            return -1;
        }
        if(arr[n]==key){
            return n;
        }
         return linearRecursive(arr, key, n+1);
        

    }

    public static int binarySearchRecursive(int[] arr,int key,int low,int high){
        if(low>high){
            return -1;
        }
        int mid=(low+high)/2;

        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            return binarySearchRecursive(arr, key, low, mid-1);
        }else{
            return binarySearchRecursive(arr, key, mid+1, high);
        }
    }

    public static int ternry2(int[] arr,int key){
        int low =0;
        int high = arr.length-1;
        while(low<=high){
            int m1=low+(high-low)/3;
            int m2=high-(high-low)/3;
            if(arr[m1]==key){
                return m1;
            }
            if(arr[m2]==key){
                return m2;
            }
            if(key<arr[m1]){
                high=m1-1;

            }else if(key>arr[m1] && key<arr[m2]){
                low=m1+1;
                high =m2-1;
            }else{
                low=m2+1;
            }
        }
        return -1;
    }
    public static int ternarySearch(int[] arr,int key){
        int low=0;
        int high = arr.length-1;
        

        while(low<=high){
            int thrd=(high-low)/3;
           // System.out.println("trd "+thrd+" low "+low+" high "+ high);
            if(arr[low+thrd]==key){
                return low+thrd;
            }else if(arr[high-thrd]==key){
                return high-thrd;
            }else if (arr[low]==key) {
                return low;
            }else if(arr[high]==key){
                return high;
            }

            if(arr[low]<key && arr[low+thrd]>key){
                high = low+thrd-1;
            }else if(arr[low+thrd]<key && arr[high-thrd]>key){
                low = low+thrd+1;
                high = high-thrd -1;
                
            }else{
                low =high-thrd+1;
            }
        }
        return -1;

    }

    public static int binarySearch(int[] arr,int key){
        int low=0;
        int high=arr.length-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==key){
                return mid;
            }
            if(arr[mid]>key){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return -1;
        
    }
    

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter key to be searched");
        int key=sc.nextInt();
        System.out.println("linear: idx "+linear(arr, key));
        System.out.println("linear recursive: idx "+linearRecursive(arr, key, 0));
        System.out.println("binary: idx "+binarySearch(arr, key));
        System.out.println("binary recursive: idx "+binarySearchRecursive(arr, key, 0, arr.length-1));
        System.out.println("Ternary Serch: "+ ternry2(arr, key));
        

        
    }
}
