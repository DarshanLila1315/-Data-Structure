#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define n 100

char stack[n];
int top = -1;

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void push(char item) {
    if (top >= n - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

char pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return '\0';
    }
    return stack[top--];
}

int main() {
    int t, N;
    char str[n], result[n];

    printf("Enter number of test cases: ");
    scanf("%d", &t);
    getchar();

    while (t--) {
        printf("Enter length of string: ");
        scanf("%d", &N);
        getchar();

        printf("Enter the string: ");
        scanf("%s", str);

        top = -1;
        int resIndex = 0;

        for (int i = 0; i < N; i++) {
            if (isVowel(str[i])) {
                while (top >= 0) {
                    result[resIndex++] = pop();
                }
                result[resIndex++] = str[i];
            } else {
                push(str[i]);
            }
        }

        while (top >= 0) {
            result[resIndex++] = pop();
        }

        result[resIndex] = '\0';
        printf("Final string: %s\n", result);
    }

    return 0;
}   