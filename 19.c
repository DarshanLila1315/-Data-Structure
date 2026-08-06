// WAP to print Pascal triangle

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        int num = 1;
        /* print leading spaces for triangle shape */
        for (int s = 0; s < rows - i - 1; s++)
            printf("  ");

        for (int j = 0; j <= i; j++) {
            printf("%4d", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
