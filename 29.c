//  WAP to convert infix notation to postfix notation using stack.

#include <stdio.h>
#define max 100
char s[max];
int top = -1;
char postfix[max];
int rank = 0;

void push(char c)
{
    if (top == max - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        s[++top] = c;
    }
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        return s[top--];
    }
}
int G(char c)
{
    if (c == '+' || c == '-')
        return 2;
    else if (c == '*' || c == '/')
        return 4;
    else if (c == '^')
        return 5;
    else if (c == '(')
        return 0;
    else
        return 8;
}

int F(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 3;
    else if (c == '^')
        return 6;
    else if (c == '(')
        return 9;
    else if (c == ')')
        return 0;
    else
        return 7;
}
int r(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return -1;
    else
        return 1;
}

void REVPOL(char infix[])
{
    int i = 0, j = 0;
    char c, temp;
    while (infix[i] != '\0')
    {
        c = infix[i];
        if (top < 0)
        {
            printf("String is invaild\n");
            break;
        }
        else
        {
            while (G(s[top]) > F(c))
            {
                temp = pop();
                postfix[j++] = temp;
                rank = rank + r(temp);
                if (rank < 1)
                {
                    printf("String is invaild\n");
                    break;
                }
            }
        }

        if (G(s[top]) != F(c))
        {
            push(c);
        }
        else
        {
            pop();
        }
        i++;
    }
    postfix[j] = '\0';

    if (top != -1 || rank != 1)
        printf("String is invaild\n");
    else
        printf("Postfix expression is: %s\n", postfix);
}

void main()
{
    char infix[max];

    printf("Enter the infix expression: ");
    scanf("%s", infix);

    push('(');
    int i = 0;

    while (infix[i] != '\0')
    {
        i++;
    }

    infix[i] = ')';
    infix[i + 1] = '\0';

    REVPOL(infix);
}