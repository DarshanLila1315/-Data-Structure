// 3.WAP to count the number of digits, sum of digits and product of digits of a  number.

#include <stdio.h>
void main()
{
    int number, i, temp, count = 0, sum = 0, product = 1;
    printf("Enter number :");
    scanf("%d", &number);

    while (number > 0)
    {
        temp = number % 10;
        count++;
        sum = sum + temp;
        product = product * temp;
        number = number / 10;
    }

    printf("Count is :-- %d  \n Sum is :-- %d \n  Product is :--  %d \n", count, sum, product);
}
/*
Enter number :123
Count is :-- 3  
 Sum is :-- 6 
  Product is :--  6
 */
