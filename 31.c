// WAP for evaluation of postfix Expression using Stack.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max 10
int top = -1;
char stack[max];

void push(char c)
{
    if (top == max - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top] = c;
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
        return stack[top--];
    }
}

void evaluation(char c)
{
    int a, b, result;
    if (isdigit(c))
    {
        push(c);
    }
    else
    {
        a = pop() - '0';
        b = pop() - '0';
        switch (c)
        {
        case '+':
            result = b + a;
            break;
        case '-':
            result = b - a;
            break;
        case '*':
            result = b * a;
            break;
        case '/':
            result = b / a;
            break;
        }
        push(result + '0');
    }
}

void main()
{
    char postfix[max];
    int i = 0, result;
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);
    while (postfix[i] != '\0')
    {
        evaluation(postfix[i]);
        i++;
    }
    result = pop() - '0';
    printf("Result of the postfix expression is: %d\n", result);   
}