public class commandLineCheckPrime {
    public static void main(String[] args) {
        if (args.length < 5) {
            System.out.println("5 integers not provided");
            return;
        }

        int counter = 0;


        for (int i = 0; i < 5; i++) {
            
            int num = Integer.parseInt(args[i]);
                
                
            boolean isPrime = true;

            if (num <= 1) {
                isPrime = false;

            }else{
                double check=Math.sqrt(num);

                for (int j = 2;j<=check;j++) {
                    if (num % j == 0){
                        isPrime = false;
                        break;
                    }
                }
            }

                
            if (isPrime) {
                
                counter++;
            }
        }

        System.out.println("Total prime numbers found: " + counter);
    }
}
