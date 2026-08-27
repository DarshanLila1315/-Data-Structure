//  Write a recursive function to reverse a given number.

#include <stdio.h>
int revers(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    return revers(n / 10, rev * 10 + n % 10);
}
void main()
{
    int n, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    rev = revers(n, rev);
    printf("Reversed number is: %d\n", rev);
}