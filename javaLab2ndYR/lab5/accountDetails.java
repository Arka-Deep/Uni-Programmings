import java.util.*;
class account {

    int acc_no;
    double balance;
    public void input(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter account number and balance");
        acc_no=sc.nextInt();
        balance=sc.nextDouble();
    }
    void disp(){
        System.out.println("Account no: "+acc_no+"\nBalance: "+balance);

    }
    
}


class person extends account{
    String name;
    int adhaar;
    public void input(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter name and adhaar");
        name=sc.nextLine();
        adhaar=sc.nextInt();
        super.input();
    }
    void disp(){
        System.out.println("Name: "+name+"\nAdhaar: "+adhaar);
        super.disp();
    }

}

public class accountDetails {
    public static void main(String[] args) {
        person obj[]=new person[3];
        for(int i=0;i<3;i++){
            obj[i]=new person();
            obj[i].input();
            obj[i].disp();
        }

    }
}
