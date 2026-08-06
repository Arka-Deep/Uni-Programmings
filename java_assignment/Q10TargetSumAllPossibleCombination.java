import java.util.*;
public class Q10TargetSumAllPossibleCombination {


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n ;
        System.out.println("Enter Size of Array");
        n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter "+n+"numbers");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int target;
        System.out.println("Enter target Sum: ");
        target=sc.nextInt();
        int l=0,r=n-1;
        Arrays.sort(arr);
        while(l<r){
            int curSum=arr[l]+arr[r];
            if(curSum==target){
                System.out.println("Pair found: "+arr[l]+","+arr[r]);
                l++;
                r--;
            }else if(curSum>target){
                r--;
            }else{
                l++; 
            }
        }

    }
}
