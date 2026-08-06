// WAP to swap the first and last digit of a number


#include <stdio.h>

int main()
{
    int num, temp, first, last, power = 1, middle, swap;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    // Find first digit and power
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    // Find middle digits
    middle = (num % power) / 10;

    // Swap first and last digit
    swap = last * power + middle * 10 + first;

    printf("Number after swapping = %d", swap);

    return 0;
}
