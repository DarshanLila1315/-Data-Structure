// WAP to allocate and de-allocate memory for int, char and float variable at runtime.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pint;
    char *pchar;
    float *pfloat;

    pint = (int *)malloc(sizeof(int));
    pchar = (char *)malloc(sizeof(char));
    pfloat = (float *)malloc(sizeof(float));

    printf("Enter an integer: ");
    scanf("%d", pint);
    printf("Enter a character: ");
    scanf(" %c", pchar);
    printf("Enter a float: ");
    scanf("%f", pfloat);

    printf("Integer: %d\n", *pint);
    printf("Character: %c\n", *pchar);
    printf("Float: %.2f\n", *pfloat);

    free(pint);
    free(pchar);
    free(pfloat);

    return 0;
}