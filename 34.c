//  Write a recursive function to generate the nth Fibonacci number.

#include <stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n, result;
    printf("Enter number: ");
    scanf("%d", &n);
    result = fibonacci(n);
    printf(" %d\n", result);
    return 0;
}