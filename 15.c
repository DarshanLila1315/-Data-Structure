//  WAP to check whether a given number is a Happy Number or not.
#include <stdio.h>
void main() {
    int num, sum, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    do {
        sum = 0;
        while (temp > 0) {
            sum += (temp % 10) * (temp % 10);
            temp /= 10;
        }
        temp = sum;
    } while (sum != 1 && sum != 4);
    
    if (sum == 1) {
        printf("%d is a Happy Number.\n", num);
    } else {
        printf("%d is not a Happy Number.\n", num);
    }
}