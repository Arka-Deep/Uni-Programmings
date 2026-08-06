import java.util.*;
public class forEach {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of Array");
        int size=sc.nextInt();
        int arr[]=new int[size];
        System.out.println("Enter "+size+" Numbers");
        for(int i=0;i<size;i++){
            arr[i]=sc.nextInt();
        }
        for(int i :arr){
            System.out.print(i+" ");
        }
    }
}
