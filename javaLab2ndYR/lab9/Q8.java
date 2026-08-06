import java.io.*;
public class Q8 {
    public static void main(String[] args) {
        String fileName = "data.txt";
        try {
            DataOutputStream out = new DataOutputStream(new FileOutputStream(fileName));
            out.writeChar('G');
            out.writeByte(67);
            out.writeBoolean(true);
            out.writeInt(80085);
            out.close();
            System.out.println("data written");
        } catch (Exception e) {
            System.out.println(e.getMessage());

        }
        try {
            DataInputStream in = new DataInputStream(new FileInputStream(fileName));
            char ch = in.readChar();
            byte b = in.readByte();
            boolean bool = in.readBoolean();
            int i = in.readInt();
            in.close();
            System.out.println("Char " + ch);
            System.out.println("Byte " + b);
            System.out.println("Boolean " + bool);
            System.out.println("Int " + i);
        } catch (Exception e) {
            System.out.println(e.getMessage());

        }
    }
}