import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class Q4 extends JFrame implements ActionListener, Runnable {
    JButton start, stop;
    JLabel msgLabel, imgLabel;
    String messages[] = {"Welcome", "Enjoy", "Thanks", "Visit Again"};
    int msgIndex = 0;
    boolean running = false;
    Thread t;
    int x = 50, y = 50;
    int direction = 0;
    int counter = 0;
    ImageIcon img;
    Q4() {
        setTitle("Animation Demo");
        setSize(650,450);
        setLayout(null);
        getContentPane().setBackground(Color.YELLOW);
        msgLabel = new JLabel("Welcome");
        msgLabel.setBounds(280,160,200,40);
        msgLabel.setFont(new Font("Arial", Font.BOLD,20));
        add(msgLabel);
        img = new ImageIcon("abc.jpg");   
        imgLabel = new JLabel(img);
        imgLabel.setBounds(x,y,400,400);    
        add(imgLabel);
        start = new JButton("Start Animation");
        stop = new JButton("Stop Animation");
        start.setBounds(180,280,150,40);
        stop.setBounds(350,280,150,40);
        start.addActionListener(this);
        stop.addActionListener(this);
        add(start);
        add(stop);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == start) {
            running = true;
            t = new Thread(this);
            t.start();
        }
        if(e.getSource() == stop) {
            running = false; }
    }
    public void run() {
        try {
            while(running) {
                Thread.sleep(40);
                if(direction == 0) {
                    x += 3;
                    if(x >= 450) direction = 1;
                }else if(direction == 1) {
                    y += 3;
                    if(y >= 250) direction = 2;
                }else if(direction == 2) {
                    x -= 3;
                    if(x <= 50) direction = 3;
                }else if(direction == 3) {
                    y -= 3;
                    if(y <= 50) direction = 0;
                }imgLabel.setBounds(x,y,150,150);
                counter++;
                if(counter % 25 == 0) {
                    msgIndex = (msgIndex + 1) % messages.length;
                    msgLabel.setText(messages[msgIndex]);
                }}}catch(Exception e) {}}
    public static void main(String args[]) {
        new Q4();
    }
}