import java.util.Scanner;

public class Combiner {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int n = in.nextInt();
		
		for (int i = 0; i < n; i++) {
			String firstWord = in.next();
			String secondWord = in.next();
			
			int firstLen = firstWord.length();
			int secondLen = secondWord.length();
			int lesserLen = 0;
			
			String greaterWord;
			
			if (firstLen < secondLen) {
				lesserLen = firstLen;
				greaterWord = secondWord;
			} else {
				lesserLen = secondLen;
				greaterWord = firstWord;
			}
			
			String combinedWord = "";
			
			int j;
			for (j = 0; j < lesserLen; j++) {
				combinedWord += firstWord.substring(j, j+1) + secondWord.substring(j, j+1);
			}
			
			combinedWord += greaterWord.substring(j);
			
			System.out.println(combinedWord);
		}
	}
}