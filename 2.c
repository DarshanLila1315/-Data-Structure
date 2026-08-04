// 2. 2. WAP to convert a decimal number to binary.

#include <stdio.h>

int main()
{
    int number, binary[32], size = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("Binary = 0");
        return 0;
    }

    while (number > 0)
    {
        binary[size] = number % 2;
        number /= 2;
        size++;
    }

    printf("Binary = ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}