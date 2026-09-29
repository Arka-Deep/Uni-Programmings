import java.util.*;
public class floydWarshallAllPairShortestPath {
     static void floydWarshall(int[][] minMatrix) {
        int V = minMatrix.length;
        int MaxValue = (int)1e8;


        for (int k = 0; k < V; k++) {


            for (int i = 0; i < V; i++) {


                for (int j = 0; j < V; j++) {


                    if(minMatrix[i][k] != MaxValue && minMatrix[k][j]!= MaxValue) 
                        minMatrix[i][j] = Math.min(minMatrix[i][j],minMatrix[i][k] + minMatrix[k][j]);

                    
                }
            }
        }
    }

    public static void main(String[] args) {
        int MaxValue = (int)1e8;
        
        int[][] minMatrix = {{0, 4, MaxValue, 5, MaxValue},
                        {MaxValue, 0, 1, MaxValue, 6},
                        {2, MaxValue, 0, 3, MaxValue },
                        {MaxValue, MaxValue, 1, 0, 2},
                        {1, MaxValue, MaxValue, 4, 0}};

        floydWarshall(minMatrix);
        
        for (int i = 0; i < minMatrix.length; i++) {
            for (int j = 0; j < minMatrix.length; j++) {
                System.out.print(minMatrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}
