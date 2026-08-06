import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class StudentFileManager {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String fileName = "student_details.txt";

        try {
            // 1. Accept details from keyboard
            System.out.println("--- Enter Student Details ---");
            System.out.print("Roll No: ");
            String roll = sc.nextLine();
            System.out.print("Name: ");
            String name = sc.nextLine();
            System.out.print("Subject: ");
            String subject = sc.nextLine();
            System.out.print("Marks: ");
            String marks = sc.nextLine();

            // Prepare the string to be saved
            String record = "Roll: " + roll + " | Name: " + name + " | Subject: " + subject + " | Marks: " + marks + "\n";

            // 2. Store details in a file using FileOutputStream
            FileOutputStream fos = new FileOutputStream(fileName);
            byte[] dataInBytes = record.getBytes(); // Converting String to byte array
            fos.write(dataInBytes);
            fos.close();
            System.out.println("\nData successfully saved to " + fileName);

            // 3. Read content from file using FileInputStream
            System.out.println("\n--- Reading Data From File ---");
            FileInputStream fis = new FileInputStream(fileName);
            
            int character;
            // Read byte by byte until the end of the file (-1)
            while ((character = fis.read()) != -1) {
                System.out.print((char) character);
            }
            fis.close();

        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        } finally {
            sc.close();
        }
    }
}