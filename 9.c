#include <stdio.h>

int main()
{
    int number, temp, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0)
    {
        digit = temp % 10;

        int fact = 1;

        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == number)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}