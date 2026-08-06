import java.util.*;

abstract class Bank {
    
    abstract double getRateOfInterest();
}


class SBI extends Bank {

    double getRateOfInterest() {
        return 7.5; 
    }
}


class PNB extends Bank {
   
    double getRateOfInterest() {
        return 8.2; 
    }
}

public class abstractBank {
    public static void main(String[] args) {
       
        Bank sbiBank = new SBI();
        Bank pnbBank = new PNB();

        
    
        System.out.println("The rate of interest of the SBI bank is " + sbiBank.getRateOfInterest() + "%");
        System.out.println("The rate of interest of the PNB bank is " + pnbBank.getRateOfInterest() + "%");
    }
}
