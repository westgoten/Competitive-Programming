import java.util.Scanner;

public class Problem1028 {
    public static void main(String[] args) {
        int f1, f2, temp, remainder;
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        for (int i = 0; i < n; i++) {
            f1 = in.nextInt();
            f2 = in.nextInt();
            if (f1 < f2) {
                temp = f1;
                f1 = f2;
                f2 = temp;
            }
            remainder = f1 % f2;

            while (remainder > 0) {
                f1 = f2;
                f2 = remainder;
                remainder = f1 % f2;
            }

            System.out.println(f2);
        }
    }
}
