// WAP to reverse a linked list. 
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
   struct node *link;
} node;

node *first = NULL;

struct node *New_node(int x, struct node *link)
{
    struct node *New;
    New = (struct node *)malloc(sizeof(struct node));
    New->info = x;
    New->link = link;
    return New;
}


void insert_at_front(int x)
{
    node *New;
    New = New_node(x, first);
    first = New;
}

void insert_at_end(int x)
{
    node *New, *save;
    New = New_node(x, NULL);
    if (first == NULL)
    {
        first = New;
        return;
    }
    save = first;
    while (save->link != NULL)
        save = save->link;
    save->link = New;
}

node *revers_list(node * first)
{
    node *prev, *curr, *next;
    prev = NULL;
    curr = first;
    while (curr->link != NULL)
    {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    curr->link = prev;
    return curr;
}

void display(node *first)
{
    node *save;
    save = first;
    while (save != NULL)
    {
        printf("%d ", save->info);
        save = save->link;
    }
    printf("\n");
}

void main()
{
    int choice, x;
    while (1)
    {
        printf("--------------------------------------------------------------\n");
        printf("1. Insert at front\n");
        printf("2. Insert at end\n");
        printf("3. Reverse the list\n");
        printf("4. Display the list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to insert at front: ");
            scanf("%d", &x);
            insert_at_front(x);
            break;
        case 2:
            printf("Enter the value to insert at end: ");
            scanf("%d", &x);
            insert_at_end(x);
            break;
        case 3:
            first = revers_list(first);
            break;
        case 4:
            display(first);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}