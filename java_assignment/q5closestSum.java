import java.util.*;
public class q5closestSum {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter sizee of Array");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter "+n+"numbers");

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        Arrays.sort(arr);

        int l=0,r=n-1;
        int ansl=l,ansr=r;
        int closest=Integer.MAX_VALUE;
        while(l<r){
            int cur=arr[l]+arr[r];
            
            if(Math.abs(closest)>Math.abs(cur)){
                closest=cur;
                ansl=l;
                ansr=r;

            }
            
            if(cur==0){
                break;
            }

            if(cur>0){
                r--;
            }else{
                l++;
            }
        }

        System.out.println("The answer is "+arr[ansl]+" and "+arr[ansr]);

    }    
}
