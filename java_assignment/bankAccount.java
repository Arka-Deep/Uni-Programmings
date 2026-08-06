import java.util.Scanner;
class Account{
    String bankName;
    String accountID;
    String accountName;
    double balance;
    int password;

    Scanner sc=new Scanner(System.in);

    void Get_Account_Details() {
        
        
        System.out.println("Enter Bank Name , Account id , Account Name , Balance , and Password(4-digit)");
        bankName = sc.nextLine();
        accountID = sc.nextLine();
        accountName = sc.nextLine();
        balance = sc.nextDouble();
        password = sc.nextInt();
        System.out.println("Account Created Successfully\n");
    }

    void Display() {
        System.out.println("Bank Name: " + bankName);
        System.out.println("Account ID: " + accountID);
        System.out.println("Account Name: " + accountName);
        System.out.println("Balance: Rs: " + balance);

    }

    boolean Validate_password() {
        System.out.print("Enter 4-Digit Password : ");
        int input = sc.nextInt();
        if (input == password) {
            return true;
        } else {
            System.out.println("Incorrect Password");
            return false;
        }
    }

    void With_Draw() {
        System.out.print("Enter amount to withdraw: ");
        double amount = sc.nextDouble();

        if (Validate_password()) {
            if (amount <= balance) {
                balance -= amount;
                System.out.println("Successfully withdrawn: Rs " + amount);

            } else {
                System.out.println("Insufficient balance\n");
            }
        }
    }


    void Deposit() {
        System.out.print("Enter amount to deposit: ");
        double amount = sc.nextDouble();

        if (Validate_password()) {
            balance += amount;
            System.out.println("Successfully deposited: Rs" + amount);

        }
    }

}

public class bankAccount {
    public static void main(String[] args) {
        Account obj=new Account();
        obj.Get_Account_Details();
        obj.Display();
        obj.Deposit();
        obj.With_Draw();
        
    }
}
