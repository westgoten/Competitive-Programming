import java.util.*;

public class Fuel
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		
		int time = in.nextInt();
		int speed = in.nextInt();
		
		int distance = speed * time;
		double fuel = distance / 12.0;
		
		System.out.printf(Locale.US, "%.3f\n", fuel);
	}
}
