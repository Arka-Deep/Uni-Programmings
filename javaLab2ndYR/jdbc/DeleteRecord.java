import java.sql.*;
public class DeleteRecord
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
			query = "delete from student where RollNo='R002'";
 			stat.executeUpdate(query);

			System.out.println("Records deleted successfully...");
		}
		catch(Exception ex)
		{
			System.out.println("Could not execute the query: " + ex);
		}

	}
}