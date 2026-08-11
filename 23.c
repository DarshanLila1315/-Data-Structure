// How stack can be used to recognize strings aca, bcb, abcba, abbcbba? WAP to  solve the above problem. 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char stack[100];

    int top = -1;
    int i, n;
    int middle;
    int flag = 1;

    // Enter string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    n = strlen(str);

    // Push first half characters into stack
    for(i = 0; i < n / 2; i++)
    {
        top++;
        stack[top] = str[i];
    }

    // Start checking from middle
    middle = (n + 1) / 2;

    // Compare second half with stack
    for(i = middle; i < n; i++)
    {
        if(stack[top] == str[i])
        {
            top--;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    // Display result
    if(flag == 1)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not Palindrome");
    }

    return 0;
}