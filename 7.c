// Duck Number
#include<stdio.h>
void main(){
    int n;
    printf("Enter A");
    scanf("%d",&n);
    int duck=0;
    while (n!=0)
    {
        int temp =n%10;
        if (temp==0)
        {
            duck=1;
        }
        n/=10;
        
    }
    if (duck==1)
    {
        printf(" This is Duck Number");
    }
    else{
        printf(" This is not Duck Number");
    }
    
    
}