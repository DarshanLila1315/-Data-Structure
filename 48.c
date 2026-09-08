// WAP to find the largest element in the array using Pointer. 
#include <stdio.h>
int main() {
    int n;
    printf("Enter size");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int largest = *ptr;
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }
    printf("The largest element is: %d", largest);
    
}