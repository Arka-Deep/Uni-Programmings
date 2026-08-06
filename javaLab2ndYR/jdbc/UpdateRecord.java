import java.sql.*;
public class UpdateRecord
{
	public static void main(String args[])
	{
		ResultSet result;
		String url = "jdbc:mysql://localhost:3306/students";
		String user = "root";
		String passcode = "helloindia";
		String query;
		try
		{
			Connection con = DriverManager.getConnection(url, user, passcode);
			Statement stat = con.createStatement();
			Class.forName("com.mysql.cj.jdbc.Driver");
			query = "Update student set Marks=15 where RollNo='R005'";
 			stat.executeUpdate(query);
			System.out.println("Records updated successfully into table...");
		}
		catch(Exception ex)
		{
			System.out.println("Could not execute the query: " + ex);
		}

	}
}