/*
41. Write a menu driven program to implement following operations on the Queue
using an Array
• ENQUEUE
• DEQUEUE
• DISPLAY
*/

#include <stdio.h>
#define n 5
int Front = -1;
int Rare = -1;
int Queue[n];
//---------------------------------------------------------------------------------------
void enqueu(int y)
{
    if (Rare > n - 1)
    {
        printf("overflow");
        return;
    }
    Rare++;
    Queue[Rare] = y;
    if (Front == -1)
    {
        Front = 0;
    }
}
//---------------------------------------------------------------------------------------
int dequeu()
{
    if (Front == -1)
    {
        printf("underflow");
        return -1;
    }
    int y = Queue[Front];

    Rare++;
    Queue[Rare] = y;
    if (Front == Rare)
    {
        Front = Rare = -1;
    }

    else
    {
        Front++;
        return y;
    }
}
//---------------------------------------------------------------------------------------
void display()
{
    if (Front == -1)
    {
        printf("underflow");
        return;
    }
    for (int i = Front; i < Rare; i++)
    {
        printf("%d\t\n", Queue[i]);
    }
}
//---------------------------------------------------------------------------------------
void main()
{
    printf("\nEnque elemnt is : \n");
    enqueu(11),
        enqueu(22),
        enqueu(33),
        enqueu(44),
        enqueu(55),
        enqueu(66),
        display(),
        printf("\nDeleted element is : %d\n", dequeu());
    printf("\nAfter Deletion  : \n");
    display();
}
//---------------------------------------------------------------------------------------
/*
Enque element is : 
11
22
33
44
55

Deleted element is : 11

After Deletion  : 
22
33
44
55
66
*/
//---------------------------------------------------------------------------------------