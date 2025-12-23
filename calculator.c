#include <stdio.h>


int main() {
  int num1;
  int num2;
  int output;
  char operand;

  printf("diy calculator v1\n");
  printf("pick the first number\n");
  scanf("%d", &num1);
  printf("pick the second number\n");
  scanf("%d", &num2);
  printf("pick the operand, + for addition - for substraction * for multiplication / for division\n");
  scanf(" %c", &operand);

  switch (operand) {
    case '+':
      output = num1 + num2;
      printf("Result = %d\n", output);
      break;
    case '-':
      output = num1 - num2;
      printf("Result = %d\n", output);
      break;
    case '*':
      output = num1 * num2;
      printf("Result = %d\n", output);
      break;
    case '/':
      output = num1 / num2;
      printf("Result = %d\n", output);
      break;
    default:
      printf("invalid operand %c, please try again\n", operand);
      break;
  }
  return 0;

}
