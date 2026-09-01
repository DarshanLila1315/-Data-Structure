#include <stdio.h>
#define max 20

int top = -1;
int stack[max];

void push(int value)
{
    if (top == max - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top] = value;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

void sortArray(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int checkStackSort(int A[], int N)
{
    int sorted[max];
    int i, k = 0;

    for (i = 0; i < N; i++)
    {
        sorted[i] = A[i];
    }

    sortArray(sorted, N);
    top = -1;

    for (i = 0; i < N; i++)
    {
        push(A[i]);

        while (top >= 0 && k < N && stack[top] == sorted[k])
        {
            pop();
            k++;
        }
    }

    if (k == N)
        return 1;
    else
        return 0;
}

int main()
{
    int T, N, i;

    printf("Enter  Number ");
    scanf("%d", &T);

    while (T--)
    {
        printf("Enter the value of N: ");
        scanf("%d", &N);

        int A[max];
        printf("Enter the elements: ");
        for (i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        if (checkStackSort(A, N))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
