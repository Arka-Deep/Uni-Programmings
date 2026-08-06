import java.util.Scanner;
class Address {
    String address;

    void setAddress(String address) {
        this.address = address;
    }

    void getAddress() {
        System.out.println("Address: " + address);
    }
}


class HomeAddress extends Address {
    String address;
    void setAddress(String address) {
        this.address = address;
    }

   
    void getAddress() {
        System.out.println("Home:" + address);
    }
}


class OfficeAddress extends Address {
    String address;

    void setAddress(String address) {
        this.address =  address;
    }


    void getAddress() {
        System.out.println("Office:" + address);
    }
}

class SchoolAddress extends Address {
    String address;
    void setAddress(String address) {
        this.address = address;
    }

    @Override
    void getAddress() {
        System.out.println("School " + address);
    }
}
public class Q9AddressOverriding {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Address obj; 

        
        obj = new HomeAddress();
        System.out.print("Enter your Home Address: ");
        String home = sc.nextLine();
        obj.setAddress(home);
        obj.getAddress();



        obj = new OfficeAddress();
        System.out.print("Enter Office Address: ");
        String office = sc.nextLine();
        obj.setAddress(office);
        obj.getAddress();


        obj = new SchoolAddress();
        System.out.print("Enter School Address: ");
        String school = sc.nextLine();
        obj.setAddress(school);
        obj.getAddress();
    }
    
}
