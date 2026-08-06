
package p1;

public class A {
    public int a = 1;     // Public
    protected int b = 2;  // Protected
    int c = 3;            // Default (Package-private)
    private int d = 4;    // Private

    public void show() {
        System.out.println(a + b + c + d); // All accessible here
    }
}