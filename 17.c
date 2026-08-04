// WAP to delete a number from an array that is already sorted in an ascending order

#include <stdio.h>

int main()
{
    int arr[100], n, num;
    int i, j, temp, pos = -1;

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

    printf("\nEnter number to delete: ");
    scanf("%d", &num);

    // Find element
    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        printf("Element not found.");
    }
    else
    {
        for(i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}