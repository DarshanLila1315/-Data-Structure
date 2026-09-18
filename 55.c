// WAP to sort elements of a linked list.
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

node * sort(node *first)
{
    node *save, *save1;
    int temp;
    save = first;
    while (save->link != NULL)
    {
        save1 = save->link;
        while (save1 != NULL)
        {
            if (save->info > save1->info)
            {
                temp = save->info;
                save->info = save1->info;
                save1->info = temp;
            }
            save1 = save1->link;
        }
        save = save->link;
    }
    return first;
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
        printf("3. Sort the list\n");
        printf("4. Display the list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted: ");
            scanf("%d", &x);
            insert_at_front(x);
            break;
        case 2:
            printf("Enter the element to be inserted: ");
            scanf("%d", &x);
            insert_at_end(x);
            break;
        case 3:
            first = sort(first);
            printf("List sorted successfully.\n");
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