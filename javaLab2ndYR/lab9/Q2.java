import java.io.*;
public class Q2 {
    public static void main(String[] args) {
        String source = "abc.txt";
        String dest = "abcd.txt";
        try {
            FileInputStream fis = new FileInputStream(source);
            FileOutputStream fos = new FileOutputStream(dest);
            int data;
            while ((data = fis.read()) != -1) {
                fos.write(data);
            }
            System.out.println("Byte stream: file copied");
            fis.close();
            fos.close();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
        try {
            FileReader fr = new FileReader(source);
            FileWriter fw = new FileWriter(dest);
            int data;
            while ((data = fr.read()) != -1) {
                fw.write(data);
            }
            System.out.println("Character stream: file copied ");
            fw.close();
            fr.close();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}