import java.util.*;

public class StringComparison
{
	public static void main(String[] args)
	{
		String name = "zeca";
		
		if (name.equals("arnaldo"))
		{
			System.out.println(0);
		}
		else if (name.substring(0, 2).equals("ze"))
		{
			System.out.println(1);
		}
		else
		{
			System.out.println(name.substring(0, 2));
		}
	}
}
