// 44. WAP to implement Priority Queue. (Ascending / Descending)

#include <stdio.h>
#define n 5
// int Queue[n];
//---------------------------------------------------------------------------------------
struct element
{
    int rno;
    int priority;
};
struct element PQ[n];
int Front = -1;
int Rare = -1;
//---------------------------------------------------------------------------------------
void enqueu(int x, int y)
{
    if (Rare == n - 1)
    {
        printf("overflow");
        return;
    }
    Rare++;
    PQ[Rare].rno = x;
    PQ[Rare].priority = y;
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
    else if (Front == Rare)
    {
        int y = PQ[Front].rno;
        Front = Rare = -1;
        return y;
    }
    else
    {
        int max_priority_index = Front;
        for (int i = Front + 1; i < Rare; i++)
        {
            if (PQ[i].priority > PQ[max_priority_index].priority)
            {
                max_priority_index = i;
            }
            int y = PQ[max_priority_index].rno;
            for (i = max_priority_index; i < Rare; i++)
            {
                PQ[i] = PQ[i + 1];
            }
            Rare--;
            return y;
        }
    }
}
//---------------------------------------------------------------------------------------
void display()
{
    if (Front == -1)
    {
        printf("Empty Queue");
        return;
    }
    for (int i = Front; i < Rare; i++)
    {
        printf("\n{%d : %d }", PQ[i].priority, PQ[i].rno);
    }
}
//---------------------------------------------------------------------------------------
void main()
{
    printf("\nEnque elemnt is : \n");
    enqueu(11, 8),
        enqueu(22, 9),
        enqueu(33, 3),
        enqueu(44, 2),
        enqueu(55, 5),
        display();
        printf("\nAfter Deque elemnt is :%d \n", dequeu());
        display();

}
//---------------------------------------------------------------------------------------
/*
baki
*/
//---------------------------------------------------------------------------------------