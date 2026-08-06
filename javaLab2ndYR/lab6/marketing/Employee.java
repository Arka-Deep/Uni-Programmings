package General;

public class Employee {
    protected int empid;
    private String ename;
    public double totalEarnings;

    public void setDetails(int id, String name) {
        this.empid = id;
        this.ename = name;
    }

    public double earnings(double basic) {
        double da = 0.8 * basic;
        double hra = 0.15 * basic;
        totalEarnings = basic + da + hra;
        return totalEarnings;
    }
}