import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q3 extends JFrame implements ActionListener, Runnable {
    JLabel timeLabel;
    JButton startBtn, resetBtn;
    int ms = 0, sec = 0, min = 0;
    boolean running = false;
    Thread t;
    Q3() {
        setTitle("Stop Watch");
        setSize(300,200);
        setLayout(new FlowLayout());
        timeLabel = new JLabel("00 : 00 : 00");
        timeLabel.setFont(new Font("Arial", Font.BOLD, 24));
        startBtn = new JButton("Start");
        resetBtn = new JButton("Reset");
        startBtn.addActionListener(this);
        resetBtn.addActionListener(this);
        add(timeLabel);
        add(startBtn);
        add(resetBtn);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);    }
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == startBtn) {
            if(!running) {
                running = true;
                t = new Thread(this);
                t.start();}}
        if(e.getSource() == resetBtn) {
            running = false;
            ms = sec = min = 0;
            timeLabel.setText("00 : 00 : 00");
        }}
    public void run() {
        try {
            while(running) {
                Thread.sleep(10);
                ms++;
                if(ms == 100) {
                    ms = 0;
                    sec++;
                }
                if(sec == 60) {
                    sec = 0;
                    min++;
                }
                timeLabel.setText(String.format("%02d : %02d : %02d", min, sec, ms));
            }}catch(Exception e) {}}
    public static void main(String[] args) {
        new Q3();
    }
}