// WAP to check whether two numbers are co-prime or not.
#include<stdio.h>
void main(){
    int n1, n2, i, gcd = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    for(i = 1; i <= n1 && i <= n2; i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    if(gcd == 1){
        printf("The numbers are co-prime.\n");
    }
    else{
        printf("The numbers are not co-prime.\n");
    }
}