import java.io.*;
import java.util.Scanner;
public class Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter filename ");
        String fileName = sc.nextLine();
        int lc = 0;
        int wc = 0;
        int chc = 0;
        try (BufferedReader reader = new BufferedReader(new FileReader(fileName))) {
            String line;
            while ((line = reader.readLine()) != null) {
                lc++;
                chc += line.length();
                if (!line.trim().isEmpty()) {
                    String[] words = line.trim().split(" ");
                    wc += words.length;
                }
            }
            System.out.println("lines      : " + lc);
            System.out.println("words      : " + wc);
            System.out.println("characters : " + chc);
        } catch (IOException e) {
            System.out.println(e.getMessage());
        } finally {
            sc.close();
        }
    }
}