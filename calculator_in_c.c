#include <stdio.h>

int main() {

  int op;
  float first, second;
  printf("Enter the first number:");
  scanf("%f", &first);
  
  printf("\nEnter the second number:");
  scanf("%f",&second);
  
  printf("Enter an operator \n1 for + \n2 for - \n3 for * \n 4 for /.\n");
  scanf("%d",&op);

  switch (op) {
    case 1:
      printf("%.1f + %.1f = %.1f", first, second, first + second);
      break;
    case 2:
      printf("%.1f - %.1f = %.1f", first, second, first - second);
      break;
    case 3:
      printf("%.1f * %.1f = %.1f", first, second, first * second);
      break;
    case 4:
      printf("%.1f / %.1f = %.1f", first, second, first / second);
      break;
    
    default:
      printf("Invalid input.");
  }
  return 0;
}