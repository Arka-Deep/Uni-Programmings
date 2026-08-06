import java.util.*;

public class Q4Rotate {

    
    public static void EXCHANGE(int[] arr, int p, int q) {
        int temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;
    }

    
    public static void ROTATE_RIGHT(int[] p1, int p2) {
        
        for (int i = p2 - 1; i > 0; i--) {
            EXCHANGE(p1, i, i - 1);
        }
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        
        int n = sc.nextInt();

        int[] arr = new int[n];
      
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter p2: ");
        int p2 = sc.nextInt();

        System.out.print("Before :   ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
        ROTATE_RIGHT(arr, p2);

        System.out.print("After :    ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}