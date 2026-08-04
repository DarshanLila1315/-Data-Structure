// 1. WAP to print the Fibonacci series up to n terms.

#include <stdio.h>
void main()
{
    int number, a = 0, b = 1, temp;
    printf("Enter Number n :");
    scanf("%d", &number);
    printf("%d", a);

    for (int i = 1; i < number; i++)
    {
        int temp = a + b;
        a = b;
        b = temp;
        printf(" %d ",a);
    }
}
/*
Enter Number n :5
0 1  1  2  3*/