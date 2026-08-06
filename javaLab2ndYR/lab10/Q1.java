import javax.swing.*;
import java.awt.*;
public class Q1{
    public static void main(String[] args) {
        JFrame frame = new JFrame("Question 1");
        frame.setLayout(new FlowLayout()); 
        frame.setSize(250, 300);
        frame.setVisible(true);
        frame.add(new JLabel("usrname:"));
        frame.add(new JTextField(15));
        frame.add(new JLabel("gender:"));
        frame.add(new JRadioButton("male"));
        frame.add(new JRadioButton("female"));
        frame.add(new JCheckBox("checkbox"));
        JButton btn = new JButton("submit");
        frame.add(btn);  
    }
}