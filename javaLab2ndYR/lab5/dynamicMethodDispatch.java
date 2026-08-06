class fruit {
    public void show() {
        System.out.println(" Fruit class (Parent Class).");
    }
}

class banana extends fruit {

    public void show() {
        System.out.println("Banana class (Child Class 1).");
    }
}

class cherry extends fruit {

    public void show() {
        System.out.println("Cherry class (Child Class 2).");
    }
}
public class dynamicMethodDispatch {
    public static void main(String[] args) {
        fruit obj=new fruit();
        obj.show();
        obj=new banana();
        obj.show();
        obj=new cherry();
        obj.show();
    }
}
