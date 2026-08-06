import java.sql.*;
import java.io.*;
import java.util.*;
public class SelectRecord
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
			//Loading the Driver
			Class.forName("com.mysql.cj.jdbc.Driver");

			//Connecting the Database
			Connection con = DriverManager.getConnection(url, user, passcode);

			//Querying the Database
			Statement stat = con.createStatement();

			query = "select * from student";
 			result=stat.executeQuery(query);
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