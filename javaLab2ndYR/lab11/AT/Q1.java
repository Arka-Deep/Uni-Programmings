import java.util.Scanner;
class CounterThread extends Thread {
    int start, end;
    CounterThread(String name, int start, int end) {
        super(name);
        this.start = start;
        this.end = end;
    }
    public void run() {
        try {
            for (int i = start; i <= end; i++) {
                System.out.println(getName() + " : " + i);
                Thread.sleep(5);
            }
        } catch (InterruptedException e) {
            System.out.println("Thread interrupted");
        }
    }
}
public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter thread name: ");
        String name = sc.nextLine();
        System.out.print("Enter starting value: ");
        int start = sc.nextInt();
        System.out.print("Enter ending value: ");
        int end = sc.nextInt();
        CounterThread t1 = new CounterThread(name, start, end);
        t1.start();
    }
}