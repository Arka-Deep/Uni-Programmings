import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q4 extends JFrame implements ActionListener {
    JLabel lblRed, lblBlue, lblGreen;
    JComboBox comboRed, comboBlue, comboGreen;
    JButton btnShow;
    public Q4() {
        setTitle("My Frame");
        setSize(500, 300);
        setLayout(new FlowLayout());
        lblRed = new JLabel("Red");
        lblRed.setForeground(Color.RED);    
        lblBlue = new JLabel("Blue");
        lblBlue.setForeground(Color.BLUE);   
        lblGreen = new JLabel("Green");
        lblGreen.setForeground(Color.GREEN);
        comboRed = new JComboBox();
        comboBlue = new JComboBox();
        comboGreen = new JComboBox();
        for (int i = 0; i <= 255; i++) {
            String val = String.valueOf(i);
            comboRed.addItem(val);
            comboBlue.addItem(val);
            comboGreen.addItem(val);        }
        btnShow = new JButton("Show-Output");
        btnShow.addActionListener(this);
        add(lblRed);
        add(comboRed);
        add(lblBlue);
        add(comboBlue);
        add(lblGreen);
        add(comboGreen);
        add(btnShow);
        updateBackground();
        setVisible(true);    }
    public void actionPerformed(ActionEvent e) {
        updateBackground();    }
    void updateBackground() {
        int r = Integer.parseInt((String) comboRed.getSelectedItem());
        int b = Integer.parseInt((String) comboBlue.getSelectedItem());
        int g = Integer.parseInt((String) comboGreen.getSelectedItem());
        Color customColor = new Color(r, g, b);       
        getContentPane().setBackground(customColor);
    }
    public static void main(String[] args) {
        new Q4();
    }
}