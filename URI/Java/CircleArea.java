import java.util.*;

public class CircleArea
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		in.useLocale(Locale.US);
		
		double radius = in.nextDouble();
		
		double pi = 3.14159;
		double area = pi * Math.pow(radius, 2.0);
		
		System.out.printf(Locale.US, "A=%.4f\n", area);
	}
}
