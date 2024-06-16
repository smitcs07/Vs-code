
import java.util.Scanner;
public class Even_odd {
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter First number to find even odd: ");
        int n=sc.nextInt();
        // System.out.print("Enter second value: ");
        // int b=sc.nextInt();
        if(n%2==0){
            System.out.println("This is even number");
        }
        else
        System.out.println("Odd number");
    }
}
