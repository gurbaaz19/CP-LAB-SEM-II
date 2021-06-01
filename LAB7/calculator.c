#include <stdio.h>

int multiply(int x, int y)
{
  if (x == 1)
  {
    return y;
  }
  else
  {
    return y + multiply(x - 1, y);
  }
}

int divide(int x, int y)
{
  if (x >= y)
  {
    x = x - y;
    if (x > 1)
    {
      return divide(x, y) + 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
}

int exponentiate(int x, int y)
{
  if (y == 1)
  {
    return x;
  }
  else
  {
    return x * exponentiate(x, y - 1);
  }
}

int main()
{
  int x, y, op;

  printf("Operations:\n");
  printf("1. Multiply\n");
  printf("2. Divide\n");
  printf("3. Exponentiate\n");

  printf("Enter the operation (1,2,3):\n");
  scanf("%d", &op);

  printf("Enter first positive non-zero integer\n");
  scanf("%d", &x);
  printf("Enter second positive non-zero integer\n");
  scanf("%d", &y);

  switch (op)
  {
  case 1:
    printf("Result = %d\n", multiply(x, y));
    break;
  case 2:
    printf("Result = %d\n", divide(x, y));
    break;
  case 3:
    printf("Result = %d\n", exponentiate(x, y));
    break;
  }
  return 0;
}
