import java.util.Scanner;

public class OneTwoThree {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int n = in.nextInt();
		
		String one = "one";
		String two = "two";
		
		for (int i = 0; i < n; i++) {
			int oneCount = 0;
			int twoCount = 0;
			
			String number = in.next();
			
			if (number.length() > 3) {
				System.out.println("3");
			} else {
				for (int j = 0; j < 3; j++) {
					char numberChar = number.charAt(j);
					if (numberChar == one.charAt(j))
						oneCount++;
					if (numberChar == two.charAt(j))
						twoCount++;
				}
				
				if (oneCount > twoCount)
					System.out.println("1");
				else
					System.out.println("2");
			}
		}
	}
}