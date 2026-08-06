package p2;
import p1.Protection;

class Protection2 extends Protection {
    Protection2() {
        System.out.println("\nProtection2 (Other Package Subclass) Constructor:");
        
        System.out.println("pub = " + n_pub + ", pro = " + n_pro);
    }
}