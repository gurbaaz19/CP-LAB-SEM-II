#include <stdio.h>

// Define the type alias 'FType' here.
// FType should be a function type similar to that of linSearch,binSearch

typedef int FType(int[], int, int, int);

int linSearch(int A[], int x, int y, int k)
{
  int flag = 0;
  for (int i = x; i <= y; i++)
  {
    if (A[i] == k)
    {
      flag = 1;
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
  f(A,0,n,k);
  return 0;
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

  printf("Enter number integers: ");
  scanf(" %d", &n);
  printf("Enter K: ");
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
    search(binSearch,A,n-1,k);
  }
  else
  {
    search(linSearch,A,n-1,k);
  }

  return 0;
}
