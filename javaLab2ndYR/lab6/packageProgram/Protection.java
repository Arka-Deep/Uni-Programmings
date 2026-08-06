package p1;

public class Protection {
    public int n_pub = 1;
    private int n_pri = 2;
    protected int n_pro = 3;
    int n_def = 4;

    public Protection() {
        System.out.println("Base Constructor:");
        System.out.println("pub = " + n_pub + ", pri = " + n_pri +", pro = " + n_pro + ", def = " + n_def);
    }
}