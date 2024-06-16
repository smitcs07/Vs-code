import java.util.Scanner;

public class Takeinput{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your lucky number");
        int num_1 = sc.nextInt();
        int num_2 = sc.nextInt();
        System.out.println("Lucky Number is: " + num_1 +" "+num_2);
    }
}