// Duck Number
#include<stdio.h>
void main(){
    int n,sum=0,temp;
    printf("Enter A");
    scanf("%d",&n);
    int a=n;
    while (n!=0)
    {
         temp =n%10;
        sum+=temp;
        n/=10;
        
    }
    
    
    if (a%sum==0)
    {
        
        printf(" This is Harshad  Number");
    }
    else{
        printf(" This is not Harshad Number");
    }
    
    
}