import java.util.*;

public class kruskalMCST {

    static class Edge {
        int src, dest, wt;

        Edge(int src, int dest, int wt) {
            this.src = src;
            this.dest = dest;
            this.wt = wt;
        }
    }


    public static int find(int arr[],int i){
        while(arr[i]>0){
            i=arr[i];
        }
        return i;
    }

    static void union(int[] arr, int i, int j) {
        int rooti = find(arr, i);
        int rootj = find(arr, j);
        arr[rooti] = rootj;
    }

    static void sortEdges(Edge[] edges, int n) {
        for (int i = 0; i < n - 1; i++) {

            for (int j = 0; j < n - i - 1; j++) {

                if (edges[j].wt > edges[j + 1].wt) {
                    Edge temp = edges[j];
                    edges[j] = edges[j + 1];
                    edges[j + 1] = temp;
                }
            }
        }
    }

    public static void kruskalMST(Edge[] edges, int vert, int nEdges) {
        
        sortEdges(edges, nEdges);

        
        int[] parent = new int[vert];
        for (int i = 0; i < vert; i++) {
            parent[i] = -1;
        }

        Edge[] mst = new Edge[vert - 1]; 
        int edgeCount = 0;
        int minCost = 0;

        
        for (int i = 0; i < nEdges && edgeCount < vert - 1; i++) {
            Edge nextEdge = edges[i];

            int rootSrc = find(parent, nextEdge.src);
            int rootDest = find(parent, nextEdge.dest);

            
            if (rootSrc != rootDest) {
                mst[edgeCount] = nextEdge;
                edgeCount++;
                minCost += nextEdge.wt;
                union(parent, rootSrc, rootDest);
            }
        }

        
        System.out.println("Edges in Minimum Cost Spanning Tree:");
        for (int i = 0; i < edgeCount; i++) {
            System.out.println(mst[i].src + " -- " + mst[i].dest + " == " + mst[i].wt);
        }
        System.out.println("Total Minimum Cost: " + minCost);
    }
   public static void main(String[] args) {
    int vertices = 4;
        int numEdges = 5;

        Edge[] edges = new Edge[numEdges];

        
        edges[0] = new Edge(0, 1, 10);
        edges[1] = new Edge(0, 2, 6);
        edges[2] = new Edge(0, 3, 5);
        edges[3] = new Edge(1, 3, 15);
        edges[4] = new Edge(2, 3, 4);

        kruskalMST(edges, vertices, numEdges);
   } 
}
