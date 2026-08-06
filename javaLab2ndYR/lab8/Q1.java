import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter string ");
        String str1 = sc.nextLine();

        System.out.println("1. change case ");
        System.out.println("2. reverse ");
        System.out.println("3. compare strings");
        System.out.println("4. insert one string into another");
        System.out.println("5. convert to upper and lower case");
        System.out.println("6. search a character");
        System.out.println("7. check palindrome");
        System.out.println("8. count words, vowels, consonants");
        System.out.println(" enter choice ");
        int ch = sc.nextInt();
        sc.nextLine();

        switch (ch) {
            case 1:
                String tmp = "";
                for (int i = 0; i < str1.length(); i++) {
                    char c = str1.charAt(i);
                    if (Character.isUpperCase(c)) {
                        tmp += Character.toLowerCase(c);
                    } else if (Character.isLowerCase(c)) {
                        tmp += Character.toUpperCase(c);
                    } else {
                        tmp += c;
                    }
                }
                System.out.println(tmp);
                break;

            case 2: 
                String rev = "";
                for (int i = str1.length() - 1; i >= 0; i--) {
                    rev += str1.charAt(i);
                }
                System.out.println("Reversed: " + rev);
                break;

            case 3: 
                System.out.print("Enter another string: ");
                String str2 = sc.nextLine();

                if (str1.equals(str2))
                    System.out.println("same strings");
                else
                    System.out.println("different strings");
                break;

            case 4:
                System.out.println("Enter string");

                String str3 = sc.nextLine();
                System.out.println("Enter index position: ");
                int idx = sc.nextInt();
                StringBuilder stb = new StringBuilder(str1);
                stb.insert(idx,str3);
                System.out.println("new String "+stb.toString());

                break;

            case 5: 
                System.out.println("Upper: " + str1.toUpperCase());
                System.out.println("Lower: " + str1.toLowerCase());
                break;

            case 6: 
                System.out.println("Enter a character");
                char ch1=sc.next().charAt(0);
                int pos = str1.indexOf(ch1);
                if(pos==-1){
                    System.out.println("Not Found");
                }else{
                    System.out.println("Found At "+pos);
                }
                break;
            case 7:
                StringBuilder stb1 = new StringBuilder(str1);
                stb1.reverse();
                if(str1.equals(stb1.toString())){
                    System.out.println("Palindrome");
                }else{
                    System.out.println("Not a palindrome");
                }
                break;
            case 8:
                String arr[]=str1.trim().split(" ");
                int word=arr.length;
                int v=0,c=0;
                for(int i=0;i<str1.length();i++){
                    char ch2=str1.charAt(i);
                    ch2=Character.toUpperCase(ch2);
                    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                        v++;
                    }else if(ch>='A' && ch<='Z'){
                        c++;
                    }
                }

                System.out.println("Number of Words "+word+"\n Vowels = "+v+"\nConsonants = "+c);


                break;


        }
        sc.close();
    }
}