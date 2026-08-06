import java.util.Scanner;


class Counter extends Thread {
    int start;
    int end;
    public Counter(String name, int start, int end) {
        this.setName(name);
        this.start = start;
        this.end = end;
    }
    public void run() {
        for (int i = start; i <= end; i++) {           
            System.out.println(this.getName() + " - Counter: " + i);
            try {
                Thread.sleep(5);
            } catch (InterruptedException e) {
                System.out.println("Thread was interrupted!");
            }
        }
    }
}

public class Q1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        System.out.print("Enter a name for the thread: ");
        String name = sc.nextLine();

        System.out.print("Enter start value: ");
        int start = sc.nextInt();

        System.out.print("Enter end value: ");
        int end = sc.nextInt();


        Counter thread = new Counter(name, start, end);

        System.out.println("Starting thread...");
        thread.start();

    }
}