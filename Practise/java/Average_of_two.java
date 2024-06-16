import java.util.Scanner;
public class Average_of_two{
    public static void main(String[] args){
        Scanner sm = new Scanner(System.in);
     System.out.println("Enter value to get average: ");
     System.out.print("Enter first value: ");
     int first=sm.nextInt();
     System.out.print("Enter second value: ");
     int second=sm.nextInt();
     int output =(first+second)/2;
     System.out.println("Your output is: "+ output);
    }
}
