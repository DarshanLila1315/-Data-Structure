//  WAP to delete duplicate numbers from an array.

#include <stdio.h>
int main() {
    int arr[100],n,i,j,k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates: ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}