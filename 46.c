//  WAP to get and print the array elements using Pointer.
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[5], i;
    int *p;
    p = a;
    printf("Enter 5 element of array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }
    printf("Array elements are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
}