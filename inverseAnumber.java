import java.util.*;

public class inverseAnumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the number :");
        int n = sc.nextInt();
        int op = 1;
        int inv = 0;
        while (n>0) {
            int digit = n %10;
            int ip = digit;
            int id = op;
            inv = inv+id*(int)Math.pow(10, ip-1);
            op++;
            n /= 10;
            
        }
        System.out.println(inv);

        



    }
}