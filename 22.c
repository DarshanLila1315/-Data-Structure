//  Write a menu driven program to implement following operations on the Stack using an Array :-
// • PUSH, POP, DISPLAY
// • PEEP, CHANGE

#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int value = stack[top];
        top--;
        return value;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {

        for (int i = top; i >= 0; i--)
        {
            printf("Stack elements: ");
            printf("%d \n", stack[i]);
        }
        printf("\n");
    }
}

int peep(int i)
{
    if (top - i + 1 <= -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return stack[top - i + 1];
    }
}

void change(int index, int value)
{
    if (index < 0 || index > top)
    {
        printf("Invalid index\n");
    }
    else
    {
        stack[index] = value;
    }
}

int main()
{
    int choice, value, index;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. PEEP\n");
        printf("5. CHANGE\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            value = pop();
            if (value != -1)
            {
                printf("Popped value: %d\n", value);
            }
            break;
        case 3:
            display();
            break;
        case 4:
            printf("enter index");
            scanf("%d",&index);
            value = peep(index);
            if (value != -1)
            {
                printf("Top value: %d\n", value);
            }
            break;
        case 5:
            printf("Enter index to change and new value: ");
            scanf("%d %d", &index, &value);
            change(index, value);
            break;
        case 6:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}