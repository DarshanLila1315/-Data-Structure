#include<stdio.h>
#include<string.h>
#define N 100

char S[N];
int TOP = -1;

void push(char x)
{
    if(TOP>=N-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        S[++TOP] = x;
    }
}

char POP()
{
    if(TOP == -1)
    {
        printf("Stack UnderFlow");
        return -1;
    }
    return S[TOP--];
}

int precedence(char c)
{
    if(c == '(' || c == ')')
    {
        return 1;
    }
    if(c == '{' || c == '}')
    {
        return 2;
    }
    if(c == '[' || c == ']')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

int ValidParen(char str[])
{
    int len = strlen(str);
    for(int i = 0; i<len; i++)
    {
        char current = str[i];
        
        if(current == '(' || current == '[' || current == '{')
        {
            push(current);
        }
        else
        {
            if(TOP == -1) 
            {
                return 0; 
            }
            
            char top = S[TOP]; 
            
            if(precedence(current) == precedence(top))
            {
                POP();
            }
            else{
                return 0;
            }
        }
    } 
    if(TOP == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char str[N];
    printf("Enter String Here: ");
    scanf("%s",str);
    int result = ValidParen(str);
    printf("%d\n", result);
    return 0;
}