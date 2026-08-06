package p1;

class Derived extends Protection {
    Derived() {
        System.out.println("\nDerived (Same Package) Constructor:");
        
        System.out.println("pub = " + n_pub + ", pro = " + n_pro + ", def = " + n_def);
    }
}

class SamePackage {
    SamePackage() {
        Protection p = new Protection();
        System.out.println("\nSamePackage Constructor:");
        
        System.out.println("pub = " + p.n_pub + ", pro = " + p.n_pro + ", def = " + p.n_def);
    }
}