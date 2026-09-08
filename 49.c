// WAP to sort the array elements using Pointer.
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter size");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    
}