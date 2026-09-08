//  WAP to define a C structure named Student (roll_no, name, branch and
// batch_no) and also to access the structure members using Pointer.

#include <stdio.h>
typedef struct student
{
    int rno;
    char name[20];
    char branch[20];
    int batch;
} S1;

void main()
{
    S1 student1;
    S1 *ptr = &student1;
    printf("Enter roll no: ");
    scanf("%d", &ptr->rno);
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    printf("Enter Branch: ");
    scanf("%s", ptr->branch);
    printf("Enter Batch: ");
    scanf("%d", &ptr->batch);
    printf("Roll No: %d\n", ptr->rno);
    printf("Name: %s\n", ptr->name);
    printf("Branch: %s\n", ptr->branch);
    printf("Batch: %d\n", ptr->batch);
}
