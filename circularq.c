#include<stdio.h>
#define size 5
int Q[size];
int front=0,rear=0;

void enqueue(int element)
{
    if((rear+1)%size==front)
        printf("Queue is full");
    else
    {
        rear=(rear+1)%size;
        Q[rear]=element;
    }
    printf("\n front :%d \t rear :%d",front,rear);
}

void dequeue()
{
    int x=-1;
    if(front==rear)
    {
        printf("Queue is empty \n");
        front=rear=0;
    }
    else
    {
        front=(front+1)%size;
        x=Q[front];
    }
    printf("\n deleted element is %d",x);
    printf("\n front :%d \t rear :%d",front,rear);
}

void display()
{
    printf("\n");
    int i=front+1;
    do
    {
        printf(" %d", Q[i]);
        i=(i+1)%size;
    }while (i!=(rear+1)%size);
    printf("\n front :%d \t rear :%d",front,rear);
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
   

    return 0;

}