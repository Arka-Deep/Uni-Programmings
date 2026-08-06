import java.util.*;
import java.io.*;

public class Q3Duplicate {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        try {
            FileReader fr = new FileReader("num.txt");
            Scanner fs = new Scanner(fr);
            for (int i = 0; i < n && fs.hasNextInt(); i++) {
                arr[i] = fs.nextInt();
            }
            fs.close();
            fr.close();
        } catch (Exception e) {
            System.out.println("Error " + e);
        }

        Map<Integer, Integer> num = new HashMap<>();
        for (int i = 0; i < n; i++) {
            if (num.get(arr[i]) == null) {
                num.put(arr[i], 1);
            } else {
                int val = num.get(arr[i]);
                val++;
                num.put(arr[i], val);

            }
        }

        int dup = 0, max = 0, ans = 0;
        for (int k : num.keySet()) {
            int v = num.get(k);

            if (v > 1)
                dup++;

            if (v > max) {
                max = v;
                ans = k;
            }
        }

        System.out.println("total duplicate values: " + dup);
        System.out.println("most repeating element: " + ans);
    }
}
