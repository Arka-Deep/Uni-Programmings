
class parent {
    void disp() {
        System.out.println("printed from parent class");
    }
}


class child extends parent {
    
    void disp() {
        
        super.disp(); 
        
        
        System.out.println("printed from child class");
    }


}

public class superKeyword{
    public static void main(String[] args) {
        child obj= new child();
        
        obj.disp();
    }
}