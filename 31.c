// WAP for evaluation of postfix Expression using Stack.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max 20
int top = -1;
int stack[max];

void push(int c)
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

void evaluation(char c)
{
    int a, b, result;
    if (isdigit(c))
    {
        push(c - '0');
    }
    else
    {
        b = pop();
        a = pop();
        switch (c)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        }
        push(result);
    }
}

int main()
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
    result = pop();
    printf("Result of the postfix expression is: %d\n", result);   
    return 0;
}
