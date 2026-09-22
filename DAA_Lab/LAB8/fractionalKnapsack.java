import java.util.*;
public class fractionalKnapsack {
    static void bubbleSort(int prft[],int wt[], int n){
        int i, j, temp;
        boolean swapped;
        for (i = 0; i < n - 1; i++) {
            swapped = false;
            for (j = 0; j < n - i - 1; j++) {
                if (prft[j]/wt[j] < prft[j + 1]/wt[j]) {
                    
                    
                    temp = prft[j];
                    prft[j] = prft[j + 1];
                    prft[j + 1] = temp;

                    temp = wt[j];
                    wt[j] = wt[j + 1];
                    wt[j + 1] = temp;
                    swapped = true;
                }
            }

            
            if (swapped == false)
                break;
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("Enter all values for wt arr");
        int wt[]=new int[n];
        for(int i=0;i<n;i++){
            wt[i]=sc.nextInt();
        }

        System.out.println("Enter all values for profit arr");
        int prft[]=new int[n];
        for(int i=0;i<n;i++){
            prft[i]=sc.nextInt();
        }
        System.out.println("Enter max weight");
        int maxWt=sc.nextInt();

        bubbleSort(prft, wt, n);

        for(int i=0;i<n;i++){
            System.out.println(" prft: "+prft[i]+" wt "+wt[i]);
        }

        double profit=0;
        for(int i =0;i<n;i++){
            if(maxWt>=wt[i]){
                profit+=prft[i];
                maxWt-=wt[i];
            }else{
                profit=profit+((double) maxWt/wt[i])*prft[i];
                break;
            }
        }

        System.out.println("The Max profit is "+profit);


    }
}
