
interface Motor {
    
    int capacity = 7; 

  
    void run();
    void consume();
}


class WashingMachine implements Motor {
    

    public void run() {
        System.out.println("Status: The washing machine is now running.");
    }


    public void consume() {
        System.out.println("Status: Consuming electricity proportional to " + capacity + "kg capacity.");
    }
}

public class Q5Main {
    public static void main(String[] args) {

        WashingMachine myWasher = new WashingMachine();
        System.out.println("Motor Capacity accessed via object: " + myWasher.capacity + "kg");


        myWasher.run();
        myWasher.consume();
    }
}