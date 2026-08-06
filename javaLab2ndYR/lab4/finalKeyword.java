
final class f{
    public void disp() {
        System.out.println("Final class : cannot be inherited");
    }
}

class parent {
    
    final int x= 100;

    
    final void disp() {
        System.out.println("Printed from final method in parent class");
    }
}

class child extends parent {
    
   /*  void disp() { 
        System.out.println("trying to override the method from child"); 
    }
        */
        
    
}

public class finalKeyword {
    public static void main(String[] args) {
        child obj = new child();
        
        
        System.out.println("Final variable value: " + obj.x);

        obj.disp();

        
        f logic = new f();
        logic.disp();
    }
}
