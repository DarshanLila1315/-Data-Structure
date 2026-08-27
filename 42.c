// 42. Write a menu driven program to implement following operations on a circular
// queue using an Array
// • Insert
// • Delete
// • Display all elements of the queue

#include <stdio.h>
#define n 5

int Queue[n];
int Front = -1;
int Rare = -1;

//---------------------------------------------------------------------------------------
void enqueu(int y){
    if ((Rare + 1) % n == Front)
    {
        printf("overflow");
        return;
    }
    Rare = (Rare + 1) % n;
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
    if (Front == Rare)
    {
        Front = Rare = -1;
    }
    else
    {
        Front = (Front + 1) % n;
    }
    return y;
}

//---------------------------------------------------------------------------------------
void display()
{
    if (Front == -1)
    {
        printf("underflow");
        return;
    }
    int i = Front;
    while (1)
    {
        printf("%d ", Queue[i]);
        if (i == Rare)
            break;
        i = (i + 1) % n;
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
    
        display();
    printf("\nAfter Deque elemnt is :%d \n", dequeu());
   enqueu(66),
  
        // display();
    display();
}