#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int max2 = arr[1];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max2 = max;
            max = arr[i];
        }
        else if (max2 < arr[i] && arr[i] < max)
        {
            max2 = arr[i];
        }
    }
    printf("largest is %d and second largest is %d\n", max, max2);

    return 0;
}
