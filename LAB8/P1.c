#include <stdio.h>

// Define the type alias 'FType' here.
// FType should be a function type similar to that of linSearch,binSearch

typedef int FType(int[], int, int, int);

int linSearch(int A[], int x, int y, int k)
{
  int flag = 0;
  int i;
  for (i = x; i <= y; i++)
  {
    if (A[i] == k)
    {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
  {
    return i;
  }
  else
  {
    return -1;
  }
}

int binSearch(int A[], int x, int y, int k) // doubt
{
  int mid = (x + y) / 2;
  if (x > y)
    return -1;
  if (A[mid] == k)
    return mid;
  if (A[mid] < k)
    return binSearch(A, mid + 1, y, k);
  else
    return binSearch(A, x, mid - 1, k);
}

int search(FType f, int A[], int n, int k)
{
  return f(A, 0, n, k);
}

int isSort(int A[], int n)
{
  int flag = 1;
  for (int i = 0; i < n; i++)
  {
    if (A[i] <= A[i + 1])
    {
      continue;
    }
    else
    {
      flag = 0;
      break;
    }
  }
  if (flag == 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int A[100];
  int n, k;

  printf("Enter n: ");
  scanf(" %d", &n);
  printf("Enter k: ");
  scanf(" %d", &k);
  for (int i = 0; i < n; i++)
  {
    printf("Enter A[%d]: ", i);
    scanf(" %d", &A[i]);
  }

  int sorted = 0;

  sorted = isSort(A, n);

  if (sorted == 1)
  {
    int result = search(binSearch, A, n - 1, k);
    if (result == -1)
    {
      printf("K not found");
    }
    else
    {
      printf("The index of A[] at which %d is located is %d\n", k, result);
    }
  }
  else
  {
    int result = search(linSearch, A, n - 1, k);
    if (result == -1)
    {
      printf("K not found");
    }
    else
    {
      printf("The index of A[] at which %d is located is %d\n", k, result);
    }
  }

  return 0;
}
