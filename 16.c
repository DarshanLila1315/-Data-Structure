// WAP to insert a number in an array that is already sorted in an ascending order.

#include <stdio.h>

int main()
{
    int arr[100], n, num, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort array in ascending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter number to insert: ");
    scanf("%d", &num);

    // Shift elements to insert while maintaining sorted order
    i = n - 1;
    while(i >= 0 && arr[i] > num)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = num;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}