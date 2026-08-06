import java.io.*;
public class Q6 {
    public static void main(String[] args) {
        String file1 = "abc.txt";
        String file2 = "abcd.txt";
        String file3 = "output.txt";
        try {
            FileInputStream fin1 = new FileInputStream(file1);
            FileInputStream fin2 = new FileInputStream(file2);
            SequenceInputStream sis = new SequenceInputStream(fin1, fin2);
            FileOutputStream fout = new FileOutputStream(file3);
            int i;
            while ((i = sis.read()) != -1) {
                fout.write(i);
            }
            System.out.println("data merged ");
            fin1.close();
            fin2.close();
            sis.close();
            fout.close();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
        System.out.println("displaying new file");
        try {
            FileInputStream fin3 = new FileInputStream(file3);
            int i;
            while ((i = fin3.read()) != -1) {
                System.out.print((char) i);
            }
            fin3.close();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}