// 4. WAP to count the frequency of each digit in a number.
#include <stdio.h>

int main()
{
    int number, digit;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        digit = number % 10;
        freq[digit]++;
        number /= 10;
    }

    printf("\nDigit Frequency:\n");

    for (int i = 0; i <= 9; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d = %d times\n", i, freq[i]);
        }
    }

    return 0;
}



 