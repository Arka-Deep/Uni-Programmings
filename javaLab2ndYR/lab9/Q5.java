import java.io.*;
public class Q5 {
    public static void main(String[] args) {
        String src = "abc.txt";
        String dest = "abcd.txt";
        try {
            RandomAccessFile file1 = new RandomAccessFile(src, "r");
            RandomAccessFile file2 = new RandomAccessFile(dest, "rw");
            file1.seek(0);
            byte[] bf = new byte[1024];
            int r;
            while ((r = file1.read(bf)) != -1) {
                file2.write(bf, 0, r);
            }
            System.out.println("file copied");
            file1.close();
            file2.close();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}