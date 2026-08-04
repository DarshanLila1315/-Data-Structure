// 5. WAP to find the largest and smallest digit in a number.
#include <stdio.h>

int main()
{
    int number, digit;
    int max = 0, min = 9;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        digit = number % 10;

        if (digit > max)
            max = digit;

        if (digit < min)
            min = digit;

        number /= 10;
    }

    printf("Largest Digit = %d\n", max);
    printf("Smallest Digit = %d\n", min);

    return 0;
}