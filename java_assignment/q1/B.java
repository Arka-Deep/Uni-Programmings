// File: p2/B.java
package p2;
import p1.A;

public class B extends A {
    public void test() {
        System.out.println(a); // OK: Public
        System.out.println(b); // OK: Protected (via inheritance)
        
        // System.out.println(c); // ERROR: Default not visible outside p1
        // System.out.println(d); // ERROR: Private not visible outside A
    }
}