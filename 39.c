// Write a recursive function to determine whether a given string is a palindrome.
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int s, int e)
{
    if (s >= e)
    {
        return 1;
    }
    if (str[s] != str[e])
    {
        return 0;
    }
    return isPalindrome(str, s + 1, e - 1);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    if (isPalindrome(str, 0, len - 1))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}