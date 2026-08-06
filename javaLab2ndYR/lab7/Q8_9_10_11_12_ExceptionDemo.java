public class Q8_9_10_11_12_ExceptionDemo {
    public static void main(String[] args) {
        try {
            
            int result = 10 / 0; 

          
            int[] arr = {1, 2}; 
            int val = arr[5];

           
            String str = null;
            System.out.println(str.length());

        } catch (ArithmeticException e) { 
            System.out.println("Math Error: " + e);

        } catch (ArrayIndexOutOfBoundsException e) { 
            System.out.println("Array Error: " + e);

        } catch (NullPointerException e) {
            System.out.println("Null Error: " + e);
            
        } finally {
            System.out.println("Always executes.");
        }
    }
}