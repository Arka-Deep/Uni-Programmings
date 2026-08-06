public class Q1Outer {
    class Inner {
        void show() {
            System.out.println("Hello from Inner class");
        }
    }

    public static void main(String[] args) {
     Q1Outer o = new Q1Outer();
     Q1Outer.Inner i = o.new Inner();
        i.show();
    }
}
