package p2;
import p1.Protection;

class OtherPackage {
    OtherPackage() {
        Protection p = new Protection();
        System.out.println("\nOtherPackage (Different Package) Constructor:");
        System.out.println("pub = " + p.n_pub);
    }
}