// Write a menu driven program to implement following operations on the singly
// linked list.
// • Insert a node at the front of the linked list.
// • Insert a node at the end of the linked list.
// • Insert a node by preserving the order of the data of the linked list. (Ordered
// insertion)
// • Display all nodes.
// • Delete the first node of the linked list.
// • Delete the last node of the linked list.
// • Delete a node from specified position of the list.
// • Count the no. of nodes in the linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

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
    struct node *New;
    New = New_node(x, first);
    first = New;
}

void insert_at_end(int x)
{
    struct node *New, *save;
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

void insord(int x)
{
    struct node *New, *save;
    New = (struct node *)malloc(sizeof(struct node));
    New->info = x;
    if (first == NULL)
    {
        New->link = NULL;
        first = New;
        return;
    }
    save = first;
    while (save->link != NULL && New->info >= save->link->info)
        save = save->link;
    New->link = save->link;
    save->link = New;
}

void display()
{
    struct node *save;
    if (first == NULL)
    {
        printf("List is empty\n");
        return;
    }
    save = first;
    while (save != NULL)
    {
        printf("%d ", save->info);
        save = save->link;
    }
    printf("\n");
}

void delete_from_front()
{
    if (first == NULL)
    {
        printf("Underflow");
        return;
    }
    struct node *save;
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
    struct node *save, *pred;
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

void delete_from_specified(int x)
{
    if (first == NULL)
    {
        printf("Underflow");
        return;
    }
    else
    {
        struct node *save, *pred;
        save = first;
        while (save->info != x && save->link != NULL)
        {
            pred = save;
            save = save->link;
        }
        if (save->info != x)
        {
            printf("Element not found");
            return;
        }
        if (save == first)
        {
            first = first->link;
            pred->link = save->link;
        }
        else
        {
            pred->link = save->link;
        }
        free(save);
    }
}

void main()
{
    int choice, x;
    while (1)
    {
        printf("1. Insert at front\n");
        printf("2. Insert at end\n");
        printf("3. Delete from front\n");
        printf("4. Delete from End\n");
        printf("5. Delete from specified \n");
        printf("6. Display\n");
        printf("7. Exit\n");
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
            printf("Enter the element to delete from specified position: ");
            scanf("%d", &x);
            delete_from_specified(x);
            break;
        case 6:
            display();
            break;
        case 7:
            return;
        default:
            printf("Invalid choice\n");
        }
    }
}