#include <stdio.h>

// Define the type alias 'FType' here.
// FType should be a function type similar to that of linSearch,binSearch

typedef int FType(int[], int, int, int);

int linSearch(int A[], int x, int y, int k)
{
  for (int i = x; i <= y; i++)
  {
    if (A[i] == k)
    {
      return 1;
    }
    return 0;
  }
}

int binSearch(int A[], int x, int y, int k) // doubt
{
  int mid = (x + y) / 2;
  if (x > y)
    return 0;
  if (A[mid] == k)
    return 1;
  if (A[mid] < k)
    return binSearch(A, mid + 1, y, k);
  else
    return binSearch(A, x, mid - 1, k);
}

int search(FType f, int A[], int n, int k)
{
  
}

int isSort(int A[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (A[i] < A[i + 1])
    {
      continue;
    }
    else
    {
      return 0;
    }

    return 1;
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
    printf("Enter A[i]: ");
    scanf(" %d", &A[i]);
  }

  return 0;
}
