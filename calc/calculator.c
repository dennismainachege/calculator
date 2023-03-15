#include <stdio.h>

int main()
{
      char operatorsymbol;
      double num1;
      double num2;
      double result;

      printf("\nPlease Enter the operatorsymbol ( + - / *): ");
      scanf("%c", &operatorsymbol);

      printf("Enter the first number :");
      scanf("%lf", &num1);

      printf("Enter the second number :");
      scanf("%lf", &num2);

switch(operatorsymbol)
{
    case '+':
    result = num1 + num2;
    printf("\n result: %lf", result);
    break;

    case '-':
    result = num1 - num2;
    printf("\n result: %lf", result);
    break;

    case '/':
    result = num1 / num2;
    printf("\n result: %lf", result);
    break;

    case '*':
    result = num1 * num2;
    printf("\n result: %lf", result);
    break;

default:
printf("%c is not a valid", operatorsymbol);
}



      return (0); 
}
