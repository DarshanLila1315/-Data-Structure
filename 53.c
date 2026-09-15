// WAP to copy a linked list.
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *link;
} node;

node *first = NULL;
node *first1 = NULL;

struct node *New_node(int x, struct node *link)
{
    struct node *New;
    New = (struct node *)malloc(sizeof(struct node));
    New->info = x;
    New->link = link;
    return New;
}


node *copy()
{
    node *save, *save1;
    if (first == NULL)
        return NULL;
    else
    {
        node *New = (node *)malloc(sizeof(node));
        node *New1;
        New->info = first->info;
        New->link = NULL;
        first1 = New;
        save = first;
        while (save->link != NULL)
        {
            save1 = New;
            save = save->link;
            New1 = (node *)malloc(sizeof(node));
            New1->info = save->info;
            save1->link = New1;
        }
        New1->link = NULL;
        return first1;
    }
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

void delete_from_front()
{
    if (first == NULL)
    {
        printf("Underflow");
        return;
    }
    node *save;
    save = first;
    first = first->link;
    free(save);
}

void delete_from_end()
{
    if (first == NULL)
    {
        printf("Underflow");
        return;
    }
    node *save, *pred;
    save = first;
    while (save->link != NULL)
    {
        pred = save;
        save = save->link;
    }
    if (save == first)
    {
        first = NULL;
        free(save);
        return;
    }
    pred->link = NULL;
    free(save);
}

void main()
{
    int choice, x;
    while (1)
    {
        printf("--------------------------------------------------------------\n");
        printf("1. Insert at front\n");
        printf("2. Insert at end\n");
        printf("3. Delete from front\n");
        printf("4. Delete from End\n");
        printf("5. Display\n");
        printf("6. Copy the linked list\n");
        printf("7. Exit\n");
        printf("--------------------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to insert at front: ");
            scanf("%d", &x);
            insert_at_front(x);
            break;
        case 2:
            printf("Enter the element to insert at end: ");
            scanf("%d", &x);
            insert_at_end(x);
            break;
        case 3:
            delete_from_front();
            break;
        case 4:
            delete_from_end();
            break;
        case 5:
            display(first);
            break;
        case 6:
            first1 = copy();
            printf("Copied linked list: ");
            display(first1);
            break;
        case 7:
            return;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}