import java.sql.*;
import java.io.*;
import java.util.*;
public class SelectRecord1
{
	public static void main(String args[])
	{
		ResultSet result;
		String url = "jdbc:mysql://localhost:3306/kiit";
		String user = "root";
		String passcode = "helloindia";
		String query;
		try
		{
			//1. Loading the Driver
			Class.forName("com.mysql.cj.jdbc.Driver");

			//2. Connection with the database
			Connection con = DriverManager.getConnection(url, user, passcode);

			//Statement stat = con.createStatement();
			Scanner obj=new Scanner(System.in);
			System.out.println("Pls Enter the Roll No whose details you want to Retrive");
		    String x=obj.nextLine();

		    PreparedStatement stat = con.prepareStatement("select * from student where RollNo=?");
		   	stat.setString(1,x);
		   	result=stat.executeQuery();
			while(result.next())
			{
				System.out.println(result.getString(1)+"   "+result.getString(2)+"   "+result.getInt(3));
			}
		}
		catch(Exception ex) {
			System.out.println("Could not execute the query: " + ex);
		}
	}
}