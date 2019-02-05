import java.util.Scanner;

public class Problem1161 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            long m = in.nextLong();
            long n = in.nextLong();

            if (m == n)
                System.out.println(evaluateFactorial(m) * 2);
            else
                System.out.println(evaluateFactorial(m) + evaluateFactorial(n));
        }
    }

    public static long evaluateFactorial(long number) {
        long result = 1;
        while (number > 1) {
            result *= number--;
        }
        return result;
    }
}
