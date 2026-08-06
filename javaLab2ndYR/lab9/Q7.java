import java.io.*;
public class Q7{
    public static void main(String[] args){
        String src = "file.txt";
        try (ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream(src))) {
            out.writeObject("hello from kiit");
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
        try (ObjectInputStream in = new ObjectInputStream(new FileInputStream(src))) {
            String r = (String) in.readObject();
            System.out.println(r);
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
    }
}