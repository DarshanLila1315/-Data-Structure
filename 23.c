// How stack can be used to recognize strings aca, bcb, abcba, abbcbba? WAP to  solve the above problem. 

#include <stdio.h>
#include <string.h>
#define n 100

char stack[n];
int top = -1;

void push(int value)
{
    if (top == n - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
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
        int value = stack[top];
        top--;
        return value;
    }
}


int main()
{
    char str[100];
   

    
    int i, n1;
    int middle;
    int flag = 1;

    // Enter string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    n1 = strlen(str);

    // Push first half characters into stack
    for(i = 0; i < n1 / 2; i++)
    {
        push(str[i]);
    }

    // Start checking from middle
    middle = (n1 % 2 == 0) ? n1 / 2 : (n1 / 2) + 1;

    // Compare second half with stack
    for(i = middle; i < n1; i++)
    {
        if(stack[top] == str[i])
        {
            pop();
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
