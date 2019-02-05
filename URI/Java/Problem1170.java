import java.util.Scanner;

public class Problem1170 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            int days = 0;
            float food = in.nextFloat();
            while (food > 1) {
                food /= 2;
                days++;
            }
            System.out.println(days + " dias");
        }
    }
}
