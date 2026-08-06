
class parent {
    public parent() {
        System.out.println("printed from parent class");
    }
}


class child extends parent {
    
    public child() {
        
        super(); 
        
        
        System.out.println("printed from child class");
    }


}

public class superKeyword{
    public static void main(String[] args) {
        child obj= new child();
        
        
    }
}