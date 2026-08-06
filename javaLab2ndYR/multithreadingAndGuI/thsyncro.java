class MyThread extends Thread
{
	static String message[]={"I","Love","java","Very","Much"};

	public MyThread(String id)//overloaded constructor
	{
		super(id);
	}
	public void run()
	{
		Sync.displayList(getName(),message);
	}
	void waiting()
	{
		try
		{
			sleep(1000);
		}
		catch(InterruptedException e)
		{
			System.out.println("Interrupted.."+e);
		}
	}
}
class Sync
{
	public static  void  displayList(String name,String list[])
	{
		for(int i=0;i<list.length;++i)
		{
			MyThread thread=(MyThread)Thread.currentThread();//no necewssary
			thread.waiting();
			//waiting();
			System.out.println(name+list[i]);
		}
	}
}
public class thsyncro
{
	public static void main(String args[])
	{
		MyThread     t1=new MyThread("Thread 1: ");
		MyThread     t2=new MyThread("Thread 2: ");

		t1.start();//this method will automatically call the run() method.
		t2.start();
	}
}



