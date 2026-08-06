import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q5 extends JFrame implements ActionListener {
    JLabel lblInput, lblOutput;
    JTextField txtInput, txtOutput;
    JButton btnCaps, btnSmall, btnReverse, btnVowels, btnConvert, btnFreq, btnWords, btnBeginCaps, btnLetters, btnReset;
    public Q5() {
        setTitle("String Manipulation Tool");
        setSize(800, 500);
        setLayout(null);
        getContentPane().setBackground(new Color(255, 180, 180));
        lblInput = new JLabel("Enter the string:");
        lblInput.setBounds(50, 30, 150, 25);
        add(lblInput);
        txtInput = new JTextField();
        txtInput.setBounds(250, 30, 300, 25);
        add(txtInput);
        lblOutput = new JLabel("Output:");
        lblOutput.setBounds(50, 80, 200, 25);
        add(lblOutput);
        txtOutput = new JTextField();
        txtOutput.setBounds(250, 80, 300, 25);
        txtOutput.setEditable(false);
        add(txtOutput);
        btnCaps = new JButton("IN CAPS");
        btnCaps.setBounds(40, 300, 100, 30);
        add(btnCaps);
        btnSmall = new JButton("IN SMALL");
        btnSmall.setBounds(200, 300, 100, 30);
        add(btnSmall);
        btnConvert = new JButton("CONVERT CASE");
        btnConvert.setBounds(370, 300, 130, 30);
        add(btnConvert);
        btnWords = new JButton("WORDS");
        btnWords.setBounds(580, 300, 90, 30);
        add(btnWords);
        btnLetters = new JButton("LETTERS");
        btnLetters.setBounds(750, 300, 90, 30);
        btnLetters.setBounds(700, 300, 90, 30);
        add(btnLetters);
        btnReverse = new JButton("REVERSE");
        btnReverse.setBounds(110, 335, 100, 30);
        add(btnReverse);
        btnVowels = new JButton("VOWELS");
        btnVowels.setBounds(280, 335, 100, 30);
        add(btnVowels);
        btnFreq = new JButton("FREQUENCY");
        btnFreq.setBounds(480, 335, 110, 30);
        add(btnFreq);
        btnBeginCaps = new JButton("BEGIN CAPS");
        btnBeginCaps.setBounds(640, 335, 110, 30);
        add(btnBeginCaps);
        btnReset = new JButton("RESET");
        btnReset.setBounds(400, 400, 100, 30);
        btnReset.setBackground(Color.BLUE);
        btnReset.setForeground(Color.WHITE);
        add(btnReset);
        btnCaps.addActionListener(this);
        btnSmall.addActionListener(this);
        btnReverse.addActionListener(this);
        btnVowels.addActionListener(this);
        btnConvert.addActionListener(this);
        btnFreq.addActionListener(this);
        btnWords.addActionListener(this);
        btnBeginCaps.addActionListener(this);
        btnLetters.addActionListener(this);
        btnReset.addActionListener(this);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e) {
        String input = txtInput.getText();
        if (e.getSource() == btnCaps) {
            txtOutput.setText(input.toUpperCase());
            lblOutput.setText("String in upper case:");
        } else if (e.getSource() == btnSmall) {
            txtOutput.setText(input.toLowerCase());
            lblOutput.setText("String in lower case:");
        } else if (e.getSource() == btnReverse) {
            String rev = "";
            for (int i = input.length() - 1; i >= 0; i--)
                rev += input.charAt(i);
            txtOutput.setText(rev);
            lblOutput.setText("Reversed String:");
        } else if (e.getSource() == btnVowels) {
            int count = 0;
            String v = "aeiouAEIOU";
            for (int i = 0; i < input.length(); i++) {
                if (v.indexOf(input.charAt(i)) != -1)
                    count++;
            }
            txtOutput.setText("" + count);
            lblOutput.setText("Number of Vowels:");
        } else if (e.getSource() == btnConvert) {
            String converted = "";
            for (int i = 0; i < input.length(); i++) {
                char c = input.charAt(i);
                if (Character.isUpperCase(c))
                    converted += Character.toLowerCase(c);
                else if (Character.isLowerCase(c))
                    converted += Character.toUpperCase(c);
                else
                    converted += c;
            }
            txtOutput.setText(converted);
            lblOutput.setText("Case Converted:");
        } else if (e.getSource() == btnWords) {
            String[] words = input.trim().split("\\s+");
            txtOutput.setText("" + (input.trim().isEmpty() ? 0 : words.length));
            lblOutput.setText("Word Count:");
        } else if (e.getSource() == btnBeginCaps) {
            String[] words = input.split(" ");
            String result = "";
            for (String w : words) {
                if (w.length() > 0)
                    result += w.substring(0, 1).toUpperCase() + w.substring(1) + " ";
            }
            txtOutput.setText(result.trim());
            lblOutput.setText("Proper Case:");
        } else if (e.getSource() == btnReset) {
            txtInput.setText("");
            txtOutput.setText("");
            lblOutput.setText("Output:");
        }
    }
    public static void main(String[] args) {
        new Q5();
    }
}