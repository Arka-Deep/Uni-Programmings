import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Q3 extends JFrame {
    JList list;
    JButton button;
    String[] colors = { "white", "orange", "red", "blue" };

    public Q3() {
        setTitle("My frame");
        setSize(400, 250);
        setLayout(new FlowLayout());
        list = new JList(colors);
        button = new JButton("Click");
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                changeBackground();
            }
        });
        add(list);
        add(button);
        setVisible(true);
    }

    void changeBackground() {
        String selected = (String) list.getSelectedValue();
        if (selected != null) {
            if (selected.equals("white")) {
                getContentPane().setBackground(Color.WHITE);
            } else if (selected.equals("orange")) {
                getContentPane().setBackground(Color.ORANGE);
            } else if (selected.equals("red")) {
                getContentPane().setBackground(Color.RED);
            } else if (selected.equals("blue")) {
                getContentPane().setBackground(Color.BLUE);
            }
        }
    }

    public static void main(String[] args) {
        new Q3();
    }
}