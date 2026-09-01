// 43. Write a menu driven program to implement following operations on the 
// Doubled Ended Queue using an Array 
// • Insert at front end, Insert at rear end 
// • Delete from front end, Delete from rear end 
// • Display all elements of the queue 

#include <stdio.h>
#define SIZE 5

int deque[SIZE];
int front = -1;
int rear = -1;
void insert_front(int x){
    if(rear == SIZE-1){
        printf("Overflow\n");
        return;
    }
    rear++;
    deque[rear] = x;
    if(front == -1){
        front = 0;
    }
}

int delete_front(){
    if(front ==-1){
        printf("Underflow\n");
        return -1;
    }
    else{
        int x=deque[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front++;
        }
        return x;
    }
}
void insert_rear(int x){
    if(front==0){
        printf("Overflow\n");
        return;
    }
    else{
        if(front ==-1){
            front = rear = 0;
        }
        else{
            front--;
        }
    }
    deque[front] = x;
}

int delete_rear(){
    if(rear == -1){
        printf("Underflow\n");
        return -1;
    }
    else{
        int x=deque[rear];
        if(front == rear){
            front = rear = -1;
        }
        else{
            rear--;
        }
        return x;
    }
}

void display(){
    if(front == -1){
        printf("Queue is empty\n");
        return;
    }
    for(int i=front;i<=rear;i++){
        printf("%d ",deque[i]);
    }
    printf("\n");
}

void main(){
    int choice, x;
    while(1){
        printf("1. Insert at front\n");
        printf("2. Insert at rear\n");
        printf("3. Delete from front\n");
        printf("4. Delete from rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the element to insert at front: ");
                scanf("%d",&x);
                insert_front(x);
                break;
            case 2:
                printf("Enter the element to insert at rear: ");
                scanf("%d",&x);
                insert_rear(x);
                break;
            case 3:
                x = delete_front();
                if(x != -1){
                    printf("Deleted element from front: %d\n",x);
                }
                break;
            case 4:
                x = delete_rear();
                if(x != -1){
                    printf("Deleted element from rear: %d\n",x);
                }
                break;
            case 5:
                display();
                break;
            case 6:
                return;
            default:
                printf("Invalid choice\n");
        }
    }
}