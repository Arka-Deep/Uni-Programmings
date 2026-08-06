package p1;

public class Demo {
    public static void main(String[] args) {
        new Protection();
        System.out.println("-----------------------");
        new Derived();
        System.out.println("-----------------------");
        new SamePackage();
    }
}