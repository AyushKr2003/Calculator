num1 = input("Enter the first number:")
op = input("Enter the operator:")
num2 = input("Enter the second number:")

num1 = float(num1)
num2 = float(num2)

if op == '+':
    output = num1 + num2
    print(f"{num1} + {num2} = {output}")

elif op == '-':
    output = num1 - num2
    print(f"{num1} - {num2} = {output}")

elif op == '*':
    output = num1 * num2
    print(f"{num1} * {num2} = {output}")

elif op == '/':
    output = num1 / num2
    print(f"{num1} / {num2} = {output}")

else:
    print("Invalid input please enter again.")


