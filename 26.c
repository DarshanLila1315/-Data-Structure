#include <stdio.h>
#include <string.h>
#define N 50
char S[N];
int TOP = -1;

void push(char x)
{
    if (TOP >= N - 1)
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
    if (TOP == -1)
    {
        printf("Stack UnderFlow");
    }
    return S[TOP--];
}
void starremover(char s[])
{
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        char current = s[i];
        if (current != '*')
        {
            push(current);
        }
        else if (current == '*' && TOP != -1)
        {
            if(TOP ==0 && current == '*')
            {
                printf("Underflow");
            }
            else
            {
                POP();
            }
        }
    }
}
int main()
{
    char str[50];
    printf("Enter String Here");
    scanf("%s", str);
    starremover(str);
    for (int i = 0; i <= TOP; i++)
    {
        printf("%c", S[i]);
    }
}