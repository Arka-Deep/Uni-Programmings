import java.util.*;

public class zeroOneKnapsack {

    static int knapSack(int W, int wt[], int val[], int n) {
        
        int K[][] = new int[n + 1][W + 1];

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= W; j++) {
                if (i == 0 || j == 0)
                    K[i][j] = 0;
                else if (wt[i - 1] <= j)
                    K[i][j] = Math.max(val[i - 1]+ K[i - 1][j - wt[i - 1]],K[i - 1][j]);
                else
                    K[i][j] = K[i - 1][j];
            }
        }

        return K[n][W];
    }

    public static void main(String args[]) {
        int profit[] = new int[] { 1,2,5 };
        int weight[] = new int[] { 2,3,4};
        int W = 6;
        int n = profit.length;
        System.out.println(knapSack(W, weight, profit, n));
    }
}
