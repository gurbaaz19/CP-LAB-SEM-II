#include <stdio.h>

int add(int x, int y)
{
  return x + y;
}

int subtract(int x, int y)
{
  return x - y;
}

int multiply(int x, int y)
{
  int result;
  int sum = 0;
  for (int i = 1; i <= y;)
  {
    sum = add(sum, x);
    i = add(i, 1);
  }
  result = sum;
  return result;
}

int divide(int x, int y)
{
  int result = -1;
  int diff = x;
  if (y != 0)
  {
    for (result = 0; result <= x && multiply(y, result) <= x;)
    {
      result = add(result, 1);
    }
    result = subtract(result, 1);
  }
  else
  {
    printf("Error");
  }
  return result;
}

int squareroot(int x)
{
  int result = 0;
  if (x >= 0)
  {
    for (result = 0; result <= x && multiply(result, result) <= x;)
    {
      result = add(result, 1);
    }
    result = subtract(result, 1);
  }
  else
  {
    printf("Error");
  }
  return result;
}

int exponentiate(int x, int y)
{
  int result;
  int product = 1;
  for (int i = y; i > 0;)
  {
    product = multiply(product, x);
    i= subtract(i,1);
  }
  result = product;
  return result;
}

int main()
{
  int x, y, op;

  printf("Operations:\n");
  printf("1. Add \n");
  printf("2. Subtract \n");
  printf("3. Multiply\n");
  printf("4. Divide\n");
  printf("5. Square Root\n");
  printf("6. Exponentiate\n");

  printf("Enter the operation (1,2,..):\n");
  scanf("%d", &op);

  switch (op)
  {
  case 5:
    printf("Enter positive integer\n");
    scanf("%d", &x);
    break;
  default:
    printf("Enter first positive integer\n");
    scanf("%d", &x);
    printf("Enter second positive integer\n");
    scanf("%d", &y);
  }
  switch (op)
  {
  case 1:
    printf("Result = %d\n", add(x, y));
    break;
  case 2:
    printf("Result = %d\n", subtract(x, y));
    break;
  case 3:
    printf("Result = %d\n", multiply(x, y));
    break;
  case 4:
    printf("Result = %d\n", divide(x, y));
    break;
  case 5:
    printf("Result = %d\n", squareroot(x));
    break;
  case 6:
    printf("Result = %d\n", exponentiate(x, y));
    break;
  }
  return 0;
}
