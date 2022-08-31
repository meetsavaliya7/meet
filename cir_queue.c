#include<stdio.h>
#define max 7
int front=-1,rear=-1,que[5],i,value,max=5,front_value,main=1;
void insert_rear(int val)
{
    if(r==max)
    {
        printf("\n queue is full");
    }
    else
    {
       r=(r+1)%max;
       q[r]=val;
    }
}
void delete_front()
{
   if(front==-1&&rear==-1) 
     printf("\n queue is full");
    else
        que[front--]=front_value;

}
void print()
{   
    
        for(i=f;i!= r;i+=(f+1)%max)
        {
            printf("\n\t\tq[%d]=%d",i,q[i]);
        }
}
int main()
{
    int ch;
    do
    {

        printf("\n press 1 --> insert_rear :");
        printf("\n press 2 --> delete_front :");
        scanf("%d",&ch);
        switch(ch)
        {
                                                                                                                                                                                    
        }

    }
}
