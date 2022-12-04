import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        float num1,num2;
        System.out.print("Enter the first number:");
        num1 = scan.nextFloat();
        System.out.print("Enter the second number:");
        num2 = scan.nextFloat();

        String p = "Enter 1 for Addition\n2 for Subtraction \n3 for Multiplication \n4 for Division";
        System.out.println(p);
        System.out.print("Enter your choice:");

        int op = scan.nextInt();

        switch (op) {
            case 1 -> System.out.println(num1 + " + " + num2 + " = " + (num1 + num2));
            case 2 -> System.out.println(num1 + " - " + num2 + " = " + (num1 - num2));
            case 3 -> System.out.println(num1 + " * " + num2 + " = " + (num1 * num2));
            case 4 -> System.out.println(num1 + " / " + num2 + " = " + (num1 / num2));
            default -> System.out.println("Invalid Input.");
        }

    }
}
