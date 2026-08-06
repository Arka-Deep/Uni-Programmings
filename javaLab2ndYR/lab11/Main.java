class MyTask implements Runnable {

    public void run() {
        System.out.println("Task running on " + Thread.currentThread().getName());
    }
}

 public class Main {
    public static void main(String[] args) {
        MyTask task = new MyTask(); // Runnable instance

        Thread t1 = new Thread(task, "Thread-1");
        t1.start(); // Starts the first thread

        // The first thread is now potentially terminated. 
        // To run the same task again, create a new Thread instance:
        Thread t2 = new Thread(task, "Thread-2");
        t2.start(); // Starts the second thread

        // Attempting t1.start() again here would throw an IllegalThreadStateException
    }
}
