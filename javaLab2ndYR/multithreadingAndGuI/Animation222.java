import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class Animation222  implements Runnable,ActionListener
{
	JPanel panel;
	JTextField Login;
	JTextField Password;
	JFrame f1;
	JButton BLogin,b2;
	JLabel LLogin;
	JLabel LPassword;

	JLabel LAnimated_Head;
	JLabel LAnimated_Box;

	Thread ani_Text;

	int ani_ctr=0;
	int ani_pict_ctr=0;

	String aniArray[]={"   Toy Universe  ","   Get Ready For ","Exciting Toy Shopping","   AT   ","www.ToyUniverse.com"};

	String aniPicture[]={"105425a.jpg","105427.jpg","108181A.jpg","108311A.jpg","108869a.jpg","108901A.jpg","104854a.jpg","106236a.jpg","107692A.jpg","107695A.jpg","107696A.jpg","106742A.jpg","106743.jpg","104854A.jpg"};

	public Animation222()
	{
		f1=new JFrame("My frame");
		f1.setVisible(true);
		f1.setSize(500,500);

		panel=new JPanel();
		f1.getContentPane().add(panel);

		panel.setLayout(null);
		Color cobj=new Color(255,0,255);
		panel.setBackground(Color.cyan);

		LAnimated_Head=new JLabel("");
		LAnimated_Box=new JLabel("");
		LLogin=new JLabel("Login Name :-");
		LPassword=new JLabel("Password   :-");

		Login=new JTextField(10);
		Password=new JTextField(10);

		BLogin=new JButton(new ImageIcon("img/107692A.jpg"));
		b2=new JButton("Stop Animation");

		//ani_Text=new Thread(this);

//only layout code
		LAnimated_Head.setBounds(100,20,420,50);
		LLogin.setBounds(110,200,90,20);
		Login.setBounds(210,200,90,20);
		LAnimated_Box.setBounds(180,80,100,100);
		LPassword.setBounds(110,230,90,20);
		Password.setBounds(210,230,90,20);
		BLogin.setBounds(160,270,105,30);
		b2.setBounds(260,370,155,30);

		panel.add(LAnimated_Head);
		panel.add(LAnimated_Box);
		panel.add(LLogin);
		panel.add(Login);
		panel.add(LPassword);
		panel.add(Password);
		panel.add(BLogin);
		panel.add(b2);

		//ani_Text.start();

		b2.addActionListener(this);
		BLogin.addActionListener(this);
	}

	public void actionPerformed(ActionEvent e)
	{
		Object obj=e.getSource();
		if(obj==b2)
		{
			ani_Text=null;
		}
		else
		if(obj==BLogin)
		{
			ani_Text=new Thread(this);//1st stage of LIfe cycly
			ani_Text.start();//2nd  stage it will automatically call the run mehtod
		}
	}
	public void run()
	{
		//for(int i=1;i<=5;i++)
		//for(;;)
		while(ani_Text != null)
		{
			showAnimation();
			try
			{
				ani_Text.sleep(1000);
			}
			catch(InterruptedException e)
			{
				System.out.println("Some Error....... "+e);
			}
		}
	}
	public void showAnimation()
	{
		Font myfont=new Font("Comic Sans MS",Font.ITALIC,32);
		LAnimated_Head.setFont(myfont);

		LAnimated_Head.setText(aniArray[ani_ctr]);
		Icon i1=new ImageIcon("D:\\WT\\JavaMiscProg\\Th2\\img\\"+aniPicture[ani_pict_ctr]);

		//Icon i1=new ImageIcon("c:\\Thread\\"+aniPicture[j]);

		//BLogin=new JButton(new ImageIcon("C:\\Thread\\107692A.jpg"));

		LAnimated_Box.setIcon(i1);

		ani_ctr++;
		ani_pict_ctr++;

		if(ani_ctr >= 5)
			ani_ctr=0;


		if(ani_pict_ctr >= 14)
			ani_pict_ctr=0;
	}
	public static void main(String args[])
	{
		Animation222 obj=new Animation222();
	}
}