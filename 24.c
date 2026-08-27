// 24. WAP to determine if an input character string is of the form a^ib^i where i >= 1
// i.e., Number of ‘a’ should be equal to number of ‘b’.

#include <stdio.h>
#include <string.h>

#define MAX 100

int top = -1;
char stack[MAX];

void push(char ch)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top] = ch;
    }
}

char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    return stack[top--];
}

int main()
{

    char str[MAX];
    int i;
    int valid = 1;
    printf("Enter A string: ");
    scanf("%s", str);

    if (strlen(str) == 0)
    {
        printf("String is not of the form a^i b^i\n");
        return 0;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            push(str[i]);
        }
        else if (str[i] == 'b')
        {
            if (top == -1)
            {
                valid = 0;
                break;
            }
            pop();
        }
        else
        {
            valid = 0;
            break;
        }
    }

    if (valid && top == -1 && str[0] == 'a' && str[strlen(str) - 1] == 'b')
    {
        printf("String is of the form a^i b^i\n");
    }
    else
    {
        printf("String is not of the form a^i b^i\n");
    }
    
}