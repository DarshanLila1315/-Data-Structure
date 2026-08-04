// WAP to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int num, first, last, digits, middle, swapped, divisor;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    divisor = 1;
    while (num / divisor >= 10)
    {
        divisor *= 10;
    }

    first = num / divisor;
    middle = (num % divisor) / 10;

    swapped = last * divisor + middle * 10 + first;

    printf("Number after swapping = %d", swapped);

    return 0;
}