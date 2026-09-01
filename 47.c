// WAP to calculate the sum of n numbers using Pointer.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, sum = 0;
    int *p;
    printf("Enter the number");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
        sum += *(p + i);
    }
    printf("Sum of %d numbers is: %d", n, sum);
    free(p);
}