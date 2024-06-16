import java.util.Scanner;
public class Sum_of_two_num {
    public static void main(String[] args){
        Scanner sm=new Scanner(System.in);
        System.out.println("Enter a number to add two number: ");
        int a=sm.nextInt();
        System.out.println("Enter another value: ");
        int b=sm.nextInt();
        int c;
        c=a+b;
        System.out.print("Output is: "+c);
    }
}