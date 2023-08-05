import 'dart:io';

void main() {
  print("Simple Calculator");

  stdout.write("Enter the first number: ");
  double num1 = double.parse(stdin.readLineSync()!);

  stdout.write("Enter the second number: ");
  double num2 = double.parse(stdin.readLineSync()!);

  print("\nSelect an operation:");
  print("1. Addition");
  print("2. Subtraction");
  print("3. Multiplication");
  print("4. Division");

  stdout.write("Enter your choice (1/2/3/4): ");
  int choice = int.parse(stdin.readLineSync()!);

  double result = 0;

  switch (choice) {
    case 1:
      result = num1 + num2;
      break;
    case 2:
      result = num1 - num2;
      break;
    case 3:
      result = num1 * num2;
      break;
    case 4:
      if (num2 != 0) {
        result = num1 / num2;
      } else {
        print("Error: Cannot divide by zero.");
        return;
      }
      break;
    default:
      print("Invalid choice.");
      return;
  }

  print("Result: $result");
}

