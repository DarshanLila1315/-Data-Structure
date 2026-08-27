//  Write a recursive function to find the sum of digits of a given number. 

#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n%10)+sum(n/10);
}
int main()
{
    int n, result;
    printf("Enter number: ");
    scanf("%d", &n);
    result = sum(n);
    printf(" %d\n", result);
    return 0;
}