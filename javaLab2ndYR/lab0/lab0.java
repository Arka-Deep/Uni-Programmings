import java.util.*;

public class lab0 {
    public static int factorialRecursive(int n){

        if(n==0)
            return 1;
        int fac=n*factorialRecursive(n-1);
        return fac;
    }
    public static void main(String[] args) {
        System.out.println(factorialRecursive(5));
    }
}
