//  Write a recursive function to convert a decimal number into its binary  equivalent.
#include <stdio.h>
void decimalToBinary(int n)
{
    if (n > 1)
        decimalToBinary(n / 2);
    printf("%d", n % 2);
}
void main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary equivalent: ");
    decimalToBinary(n);
    printf("\n");
}