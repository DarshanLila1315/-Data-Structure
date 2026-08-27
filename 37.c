//  Write a recursive function to find the largest element in a given array.

#include <stdio.h>
int Max(int a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }
    else
    {
        int max = Max(a, n - 1);
        if (max > a[n - 1])
            return max;
        else
            return a[n - 1];
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
    ans = Max(a, n);
    printf("Maximun Number is : %d", ans);
}