import java.io.*;
import java.util.Scanner;
public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String fileName = "abc.txt";
        System.out.println("Enter student roll name subject and marks");
        String roll = sc.nextLine();
        String name = sc.nextLine();
        String subject = sc.nextLine();
        String marks = sc.nextLine();
        String record = "roll " + roll + "  name: " + name + "  subject: " + subject + "  marks: " + marks + "\n";
        try {




            FileOutputStream fos = new FileOutputStream(fileName, true);
            fos.write(record.getBytes());
            System.out.println("data written");
            fos.close();
            System.out.println("readig data ");
            FileInputStream fis = new FileInputStream(fileName);
            int ch;
            while ((ch = fis.read()) != -1) {
                System.out.print((char) ch);
            }
            fis.close();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}