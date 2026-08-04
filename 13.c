// WAP to merge two unsorted arrays
#include<stdio.h>
void main(){
    int n1,n2,i,j,k;
    printf("Enter size\n");
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter anothe size\n");
    scanf("%d",&n2);
    int a1[n2];
    for(j=0;j<n2;j++){
        scanf("%d",&a1[j]);
    }
    int c[n1+n2];
    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(j=0;j<n2;j++){
        c[i+j]=a1[j];
    }
    printf("Merged array is\n");
    for(k=0;k<n1+n2;k++){
        printf("%d ",c[k]);
    }  


}