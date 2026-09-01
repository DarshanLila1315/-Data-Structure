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
    int choice, value;
    
    while (1)
    {
        printf("\n========== CIRCULAR QUEUE MENU ==========\n");
        printf("1. Insert (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("=========================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &value);
                enqueu(value);
                break;
            
            case 2:
                value = dequeu();
                if (value != -1)
                    printf("Dequeued element: %d\n", value);
                break;
            
            case 3:
                printf("Queue elements: ");
                display();
                printf("\n");
                break;
            
            case 4:
                printf("Exiting...\n");
                return;
            
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
