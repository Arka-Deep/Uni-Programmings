
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class stopwatch  implements ActionListener,Runnable
{
	JFrame f1;
	JLabel l1,lmin,lhrs,lsec,lmilsec,lsep1,lsep2,lsep3;
	JButton bstart, breset;
	JPanel p1;
	Font fnt;
	Thread stopwatch=new Thread(this);
	int mil=0,hrs=0,min=0,sec=0;

	public stopwatch()
	{
		f1=new JFrame("fdfsd");
		f1.setVisible(true);
		f1.setSize(500,500);
		p1=new JPanel();
		p1.setLayout(null);

		l1= new	JLabel("Stop Watch");
		lhrs= new	JLabel("00");
		lmin= new	JLabel("00");
		lsec= new	JLabel("00");
		lmilsec= new	JLabel("00");
		lsep1= new	JLabel(":");
		lsep2= new	JLabel(":");
		lsep3= new	JLabel(".");

		bstart= new JButton("Start");
		breset= new JButton("Reset");

		f1.getContentPane().add(p1);

		//Set Formatting

		fnt=new Font("Comic Sans MS",Font.BOLD,21);
		l1.setFont(fnt);
		l1.setForeground(Color.blue);

		fnt=new Font("Times New Roman",Font.BOLD,17);
		lhrs.setFont(fnt);
		lhrs.setForeground(Color.black);
		lsep1.setFont(fnt);
		lsep1.setForeground(Color.black);
		lmin.setFont(fnt);
		lmin.setForeground(Color.black);
		lsep2.setFont(fnt);
		lsep2.setForeground(Color.black);
		lsec.setFont(fnt);
		lsec.setForeground(Color.black);
		lsep3.setFont(fnt);
		lsep3.setForeground(Color.black);
		lmilsec.setFont(fnt);
		lmilsec.setForeground(Color.blue);

		lhrs.setHorizontalAlignment(JLabel.CENTER);
		lsep1.setHorizontalAlignment(JLabel.CENTER);
		lmin.setHorizontalAlignment(JLabel.CENTER);
		lsep2.setHorizontalAlignment(JLabel.CENTER);
		lsec.setHorizontalAlignment(JLabel.CENTER);
		lsep3.setHorizontalAlignment(JLabel.CENTER);
		lmilsec.setHorizontalAlignment(JLabel.CENTER);

		//Set Position

		l1.setBounds(50,50,200,30);

		lhrs.setBounds(50,90,30,30);
		lsep1.setBounds(80,90,20,30);
		lmin.setBounds(100,90,30,30);
		lsep2.setBounds(130,90,20,30);
		lsec.setBounds(150,90,30,30);
		lsep3.setBounds(180,90,20,30);
		lmilsec.setBounds(200,90,30,30);

		bstart.setBounds(50,130,100,30);
		breset.setBounds(170,130,100,30);

		//Adding Controls to Panel

		p1.add(l1);
		p1.add(lhrs);
		p1.add(lsep1);
		p1.add(lmin);
		p1.add(lsep2);
		p1.add(lsec);
		p1.add(lsep3);
		p1.add(lmilsec);

		p1.add(bstart);
		p1.add(breset);

		//Add Action Listeners

		bstart.addActionListener(this);
		breset.addActionListener(this);

	}

	public void actionPerformed(ActionEvent e)
	{
		Object obj= e.getSource();

		if(obj==bstart)
		{
			if(bstart.getText().equals("Start"))
			{
				if(stopwatch==null)
					stopwatch=new Thread(this);
			//	else if(stopwatch.isAlive()==true)
					//stopwatch.destroy();

				bstart.setText("Stop");
				stopwatch.start();
			}
			else
			{
				bstart.setText("Start");
				stopwatch=null;
			}
		}
		if(obj==breset)
		{
			stopwatch=null;
			lhrs.setText("00");
			lmin.setText("00");
			lsec.setText("00");
			lmilsec.setText("00");
			bstart.setText("Start");
			mil=0;
			sec=0;
			min=0;
			hrs=0;
		}
	}
	public void clock()
	{
		mil=mil+1;

		if(mil==100)
		{
			mil=00;
			sec=sec+1;
		}
		if(sec==60)
		{
			sec=00;
			min=min+1;
		}
		if(min==60)
		{
			min=00;
			hrs=hrs+1;
		}
		lmilsec.setText(Integer.toString(mil));
		lsec.setText(Integer.toString(sec));
		lmin.setText(Integer.toString(min));
		lhrs.setText(Integer.toString(hrs));
	}
	public void run()
	{
		while(stopwatch != null)
		{
			clock();
			try
			{
				stopwatch.sleep(10);
			}
			catch(InterruptedException e)
			{
				System.out.println("Some Error : "+e);
			}
		}
	}
	public static void main(String args[])
	{
		stopwatch kk=new stopwatch();
	}
}
