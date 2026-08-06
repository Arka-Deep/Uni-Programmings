import javax.swing.*;
import java.awt.event.*;
public class Q2 extends JFrame implements ActionListener {
    JLabel lbl1, lbl2, lblResult;
    JTextField txt1, txt2, txtResult;
    JButton btnAdd, btnSub, btnMul, btnReset;
    public Q2() {
        setTitle("calc");
        setSize(700, 350);
        setLayout(null);
        lbl1 = new JLabel("enter a number:");
        lbl1.setBounds(50, 80, 150, 25);
        add(lbl1);
        txt1 = new JTextField();
        txt1.setBounds(210, 80, 40, 25);
        add(txt1);
        btnAdd = new JButton("Add");
        btnAdd.setBounds(280, 80, 80, 25);
        btnAdd.addActionListener(this);
        add(btnAdd);
        btnSub = new JButton("subtract");
        btnSub.setBounds(370, 80, 100, 25);
        btnSub.addActionListener(this);
        add(btnSub);
        btnMul = new JButton("multiply");
        btnMul.setBounds(480, 80, 100, 25);
        btnMul.addActionListener(this);
        add(btnMul);
        lbl2 = new JLabel("enter another number:");
        lbl2.setBounds(50, 120, 160, 25);
        add(lbl2);
        txt2 = new JTextField();
        txt2.setBounds(210, 120, 40, 25);
        add(txt2);
        btnReset = new JButton("reset");
        btnReset.setBounds(370, 120, 80, 25);
        btnReset.addActionListener(this);
        add(btnReset);
        lblResult = new JLabel("result:");
        lblResult.setBounds(50, 160, 150, 25);
        add(lblResult);
        txtResult = new JTextField();
        txtResult.setBounds(210, 160, 100, 25);
        txtResult.setEditable(false);
        add(txtResult);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        double num1 = Double.parseDouble(txt1.getText());
        double num2 = Double.parseDouble(txt2.getText());
        double res = 0;
        if (e.getSource() == btnAdd) {
            res = num1 + num2;
            txtResult.setText(String.valueOf(res));
        } else if (e.getSource() == btnSub) {
            res = num1 - num2;
            txtResult.setText(String.valueOf(res));
        } else if (e.getSource() == btnMul) {
            res = num1 * num2;
            txtResult.setText(String.valueOf(res));
        }
        if (e.getSource() == btnReset) {
            txt1.setText("");
            txt2.setText("");
            txtResult.setText("");
        }
    }
    public static void main(String[] args) {
        new Q2();
    }
}