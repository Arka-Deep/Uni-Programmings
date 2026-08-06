// File: Main.java
import p1.A;
import p2.B;

public class Main {
    public static void main(String[] args) {
        A objA = new A();
        
        System.out.println("Public: " + objA.a); 
        
        // The following will fail if uncommented:
        // System.out.println(objA.b); // ERROR: Protected (Main is not a subclass)
        // System.out.println(objA.c); // ERROR: Default (Main is not in p1)
        // System.out.println(objA.d); // ERROR: Private
        
        System.out.println("Subclass access:");
        new B().test();
    }
}