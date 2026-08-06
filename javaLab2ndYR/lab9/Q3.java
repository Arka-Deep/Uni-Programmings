import java.io.*;
public class Q3 {
    public static void main(String[] args) {
        String file1 = "abc.txt";
        String file2 = "abcd.txt";
        try {
            FileInputStream fis1 = new FileInputStream(file1);
            FileInputStream fis2 = new FileInputStream(file2);
            int byte1, byte2;
            long pos = 1;
            boolean differ = false;
            while (true) {
                byte1 = fis1.read();
                byte2 = fis2.read();
                if (byte1 == -1 && byte2 == -1)
                    break;
                if (byte1 != byte2) {
                    System.out.println("differ at pos: " + pos);
                    differ = true;
                    break;
                }
                pos++;
            }
            if (!differ) {
                System.out.println("identical.");
            }
            fis1.close();
            fis2.close();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}