interface A {
    void show();
}

class B {
    void greet() {
        System.out.println("Hello from B");
    }
}

class C extends B implements A {
    public void show() {
        System.out.println("Showing from C");
    }
}

public class Q4 {
    public static void main(String[] args) {
        C obj = new C();
        obj.greet();
        obj.show();
    }
}
