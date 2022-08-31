#include<stdio.h>
#include<conio.h>
int first = -1,
    last = -1;
int Qinsert(int Queue[5],int val)
{
    if(first == 0 && last ==4 || last ==first -1)
    {
        printf("Queue is full");
        return 0;
    }
    else{
        if(first==-1)
            first=last=0;
        else
        {
            if(last==5)
                last=0;
            else
                last++;
        }
    }
    Queue[last]=val;
    printf("inserted");
    return last;
}
int Qdelete(int Queue[5])
{
    if(first ==-1)
        printf("Queue is empty");
    else
    {
        if(first==last)
            first=last=-1;
        else
        {
            if(first==5)
                first=0;
            else
            {
                printf("deleted eliment:%d",Queue[first]);
                first++;
            }

        }
    }
    return first;
}
void main()
{
    int Queue[5],val,ch,a;
    do
    {
        printf("\n1.insert\n2.delete\n3.display\n4.Exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("enter value :");
                scanf("%d",&val);
                last=Qinsert(Queue,val);
                break;

            case 2:
                first=Qdelete(Queue);
                break;

            case 3:
                for(a=first;a<=last;a++)
                    printf("Queue is :%d",Queue[a]);
                    break;
        }
    } while(ch!=4);
    
}