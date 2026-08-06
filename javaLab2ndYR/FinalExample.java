public class FinalExample {
    // A final instance variable
    private final String name;
    static int x =10;

    // Constructor to initialize the final variable
    public FinalExample(String name) {
        this.name = name; // Assignment happens here
        //this.name="abc"; error
    }

    public String getName() {
        System.out.println(x);
        return name;
    }

    public void tryChange() {
        // This will cause a compilation error:
        // error: cannot assign a value to final variable name
        // this.name = "Something else"; 
    }

    public static void main(String[] args) {
        FinalExample obj1 = new FinalExample("Alice");
        FinalExample obj2 = new FinalExample("Bob");

        System.out.println("Object 1 name: " + obj1.getName()); // Output: Object 1 name: Alice
        System.out.println("Object 2 name: " + obj2.getName()); // Output: Object 2 name: Bob
    }
}
