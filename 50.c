//  WAP to check whether the string is Palindrome or not using Pointer.
#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    char *ptr1 = str;
    char *ptr2 = str + len - 1;
    int flag = 1;
    while(ptr1 < ptr2){
        if(*ptr1 != *ptr2){
            flag = 0;
            break;
        }
        ptr1++;
        ptr2--;
    }
    if(flag == 1){
        printf("The string is a palindrome.\n");
    }
    else{
        printf("The string is not a palindrome.\n");
    }
}