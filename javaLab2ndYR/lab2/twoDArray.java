import java.util.*;
public class twoDArray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the row and column of Array");
        int r=sc.nextInt();
        int c=sc.nextInt();
        int arr[][]=new int[r][c];

        System.out.println("Enter "+r*c+" Numbers");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();
            }
            
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
            
                
        }
        

    }
}
