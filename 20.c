// WAP to sort the N names in an alphabetical order. 

#include <stdio.h>
#include <string.h> 

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    
    char names[n][100];
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
    
    // Sorting the names in alphabetical order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            
            if (strcmp(names[i], names[j]) > 0) {
                char temp[100];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    printf("Names in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}
