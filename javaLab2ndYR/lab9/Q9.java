import java.io.*;
public class Q9 {
    public static void main(String[] args) throws IOException {
        String f1 = "output.txt";
        try (DataOutputStream dos = new DataOutputStream(new FileOutputStream(f1))) {
            dos.writeInt(42);
        }
        try (DataInputStream dis = new DataInputStream(new FileInputStream(f1))) {
            int n = dis.readInt();
            System.out.println("Reading from file \n " + n );
        }
    }
}