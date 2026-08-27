//  Write a recursive function to calculate the sum of all elements in an array.

#include <stdio.h>
int Sumofarr(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return a[n - 1] + Sumofarr(a, n - 1);
    }

}
void main()
{
    int  n, i, ans;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    ans = Sumofarr(a, n);
    printf("Sum  is : %d", ans);
}