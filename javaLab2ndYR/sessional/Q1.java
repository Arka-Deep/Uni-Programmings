import java.util.Scanner;

class BlankCharacterException extends Exception {
    BlankCharacterException(String str) {
        super(str);
    }
}

public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        System.out.println("Enter  a string");
        str = sc.nextLine();
        String out = "";
        int len = str.length();
        try {
            if (str.equals("")) {
                throw new BlankCharacterException("Blank string entered");
            }
            for (int i = 0; i < len; i++) {
                char ch = str.charAt(i);
                if (Character.isUpperCase(ch)) {
                    out+=Character.toLowerCase(ch);
                } else if (Character.isLowerCase(ch)) {
                    out+=Character.toUpperCase(ch);
                } else {
                    out+=ch;
                }
            }
            System.out.println("New String: "+out);
        } catch (BlankCharacterException e) {
            System.out.println(e.getMessage());
        }
        
    }
}
