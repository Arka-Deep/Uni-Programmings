import java.awt.*;
import javax.swing.*;
import java.awt.event.*;


public class helloimg  implements Runnable,ActionListener
{
	JFrame f1;
	public JLabel l1,l2;
	public JPanel p1;
	Icon i1;
	Font fnt;
	JButton b1,b2;
	boolean btm=false;

	int j=0,x=0,y=0;

	Thread obj=new Thread(this);

	String aniLabel[]={" Welcome "," Enjoy "," Thanks "," Visit Again ","Pls Visit","Thanks for Visit"};
	//String aniPicture[]={"1.JPG","2.JPG","3.JPG","106743.JPG","55578_9993_main.jpg","8SIGN.JPG"};
	String aniPicture[]={"105425a.jpg","105427.jpg","108181A.jpg","108311A.jpg","108869a.jpg","108901A.jpg","104854a.jpg","106236a.jpg","107692A.jpg","107695A.jpg","107696A.jpg","106742A.jpg","106743.jpg","104854A.jpg"};

	public helloimg()
	{
		f1=new JFrame("my frame");
		f1.setVisible(true);
		f1.setSize(500,500);

		p1=new JPanel();
		l1=new JLabel("");
		l2=new JLabel("");
		b1=new JButton("Start Animation");
		b2=new JButton("Stop Animation");
		fnt=new Font("Comic Sans MS",Font.BOLD,21);

		f1.getContentPane().add(p1);
		p1.setLayout(null);
		p1.setBackground(Color.yellow);
		l2.setFont(fnt);
		l2.setHorizontalAlignment(JLabel.CENTER);

		i1=new ImageIcon("108327A.JPG");
		l1.setIcon(i1);

		l1.setBounds(0,0,200,300);
		l2.setBounds(330,200,130,40);
		b1.setBounds(200,300,180,40);
		b2.setBounds(420,300,180,40);

		p1.add(l1);
		p1.add(l2);
		p1.add(b1);
		p1.add(b2);

		b1.addActionListener(this);
		b2.addActionListener(this);

	}

	public void showAnimation()
	{
		//Icon i1=new ImageIcon("img\\"+aniPicture[j]);

		//Icon i1=new ImageIcon("D:\\WT\\JavaMiscProg\\Th2\\img\\"+aniPicture[ani_pict_ctr]);
		Icon i1=new ImageIcon("D:\\WT\\JavaMiscProg\\Th2\\img\\"+aniPicture[j]);
		l1.setIcon(i1);
		l2.setText(aniLabel[j]);
		j++;

		if(btm==false)
		{
			if(x<=710)
				x=x+10;
			else
				if(y<=370)
					y=y+10;
				else
					btm=true;
		}
		else
		{
			if(x>0)
				x=x-10;
			else
				if(y>0)
					y=y-10;
				else
					btm=false;
		}
		l1.setLocation(x,y);
		if(j >5)
			j=0;
	}

	public void run()
	{
		while(obj != null)
		{
			showAnimation();
			try
			{
				obj.sleep(100);
			}
			catch(InterruptedException e)
			{
				System.out.println("Some Error : "+e);
			}
		}
	}
	public void actionPerformed(ActionEvent e)
	{
		Object obj2=e.getSource();
		if(obj2==b1)
		{
			System.out.println("fdfsdfS");
			try
			{
				if(obj==null)
					obj=new Thread(this);
				//else if(obj.isAlive()==true)
					//obj.destroy();

				obj.start();
			}
			catch(NoSuchMethodError e1)
			{
				System.out.println("Some Error : "+e1);
			}
			catch(Exception ee)
			{
				System.out.println(ee);
			}
		}
		else
		if(obj2==b2)
			obj=null;
	}
	public static void main(String args[])
	{
		helloimg obj=new helloimg();
	}
}


