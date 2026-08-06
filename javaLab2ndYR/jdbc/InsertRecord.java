import java.sql.*;
public class InsertRecord
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
			Connection con = DriverManager.getConnection(url, user, passcode);

			Statement stat = con.createStatement();


			query = "INSERT INTO student VALUES ('R002', 'Disha', 100)";
 			stat.executeUpdate(query);
			query = "INSERT INTO student VALUES ('R007', 'Ujjwal', 110)";
			stat.executeUpdate(query);

			System.out.println("Records inserted into table successfully...");
		}
		catch(Exception ex)
		{
			System.out.println("Could not execute the query: " + ex);
		}

	}
}