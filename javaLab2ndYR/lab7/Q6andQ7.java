interface A {
    void show();
}

class B implements A {
    public void show() {
        System.out.println("B's show");
    }
    public void show2() {
        System.out.println("B's own show");
    }
}

public class Q6andQ7 {
    public static void main(String[] args) {
        A obj = new B();
        obj.show();
        //obj.show2();
    }
}
