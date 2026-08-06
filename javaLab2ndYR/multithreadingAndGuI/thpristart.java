class Thpri implements Runnable
{
	int ctr=0;
	 Thread t;
	private  boolean x=true;

	public Thpri(int pri)//overloaded constructor
	{
		t=new Thread(this);   //first  stage of Life Cycle
		t.setPriority(pri);
	}
	public void run()
	{
		//for(int i=1;i<=5;i++)
		//for(;;)
		while(x)//infinite loop
		{
			ctr++;
			//System.out.println(ctr);
		}
	}
	public void stop()
	{
		x=false;
	}
	public void start()
	{
		t.start();// it will internally call the run() method
	}
}
public class thpristart
{
	public static void main(String args[])
	{
		Thread.currentThread().setPriority(Thread.MAX_PRIORITY);

		Thpri t1=new Thpri(Thread.NORM_PRIORITY+5);
		Thpri t2=new Thpri(Thread.NORM_PRIORITY-2);

		t1.start();
		t2.start();

		try
		{
			Thread.sleep(200);
		}
		catch(Exception e)
		{
			System.out.println("some prob  "+e);
		}
		t1.stop();
		t2.stop();

		//try
		//{
			//t1.t.join();
			//t2.t.join();
		//}
		//catch(Exception ee)
		//{
			//System.out.println("soooo"+ee);
		//}
		System.out.println("High priority Threae: t1......  "+t1.ctr);
		System.out.println("Low priority Threae: t2.......  "+t2.ctr);
	}
}
