/*
41. Write a menu driven program to implement following operations on the Queue
using an Array
• ENQUEUE
• DEQUEUE
• DISPLAY
*/

#include <stdio.h>
#define SIZE 5

int front = -1;
int rear = -1;
int queue[SIZE];

//------------------------------------------------------

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full (Overflow)\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
    printf("Inserted %d\n", value);
}

//------------------------------------------------------

int dequeue()
{
    int item;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty (Underflow)\n");
        return -1;
    }

    item = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }

    printf("Deleted %d\n", item);
    return item;
}

//------------------------------------------------------


void display()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements are: ");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

//------------------------------------------------------


int main()
{
    int choice, value;

    do
    {
        printf("\nMENU\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
