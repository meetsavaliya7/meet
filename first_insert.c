#include<stdio.h>
#include<stdlib.h>
int Front=-1,Rear=-1,que[5],i,value,max=5,Front_value,min=1;
void insert_Rear()         
{
    if(Rear+1==max)
        printf("\n Queue is full");
    else
    
        if(Front==-1&&Rear==-1)  
        {    
            que[++Rear]=value;
        }
        else
            que[++Rear]=value;
}

void insert_front()      
{
    
    if(Rear-1==max)
        printf("\n Queue is full");
    
    else   
        que[Front--]=Front_value;
   
}

void delete_Rear()     
{
        if(Front==-1&&Rear==-1)
            printf("\n\n Not posible to delete Element ");
        else
        {    
            if(Front==Rear)
                Front=Rear=-1;
            else
                --Rear;
        }
}
void delete_Front()    
{
    if(Front==-1&&Rear==-1)
        printf("\n\n Not posible to delete Element ");
    else
    {    
        if(Front==Rear)
            Front=Rear=-1;
        else
            ++Front;
    }
}
void print()
{   
    if(Front==-1&&Rear==-1)
        printf("\n Queue is empty");
    else
        for(i=Front+1;i<=Rear;i++)
        {
            printf("\t\n %d ",que[i]);
        }
}
int main()
{
    int ch;
    do
    {                                                                                                                                 
        printf("\n Press 1 --> Insert_Rear \t Press 2 --> Delete_Rear ");
        printf("\n Press 3 --> Insert_Front \t Press 4 --> Delete_Front");
        printf("\n Press 5 --> Show \t\t Press 0 --> Exit.");
        printf("\n Enter Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter Your Element For Insert_Rear : ");
                scanf("%d",&value);
                printf("\n Inserted Rear Element is : %d\n",value);  
                insert_Rear();
            break;
            case 2:
                printf("\n Deleted_Rear Queue Element Is %d ",que[Rear]);  
                delete_Rear();
            break;
            case 3:
                printf("\n Enter Your Element For Insert_Front : ");
                scanf("%d",&Front_value);
                printf("\n Inserted Front Element Is : %d\n",Front_value);
                insert_front();
            break;
            case 4:
                printf("\n Deleted_Front Queue Element Is %d ",que[Front-1]);        
                delete_Front();
            break;
            case 9:
                print();
            break;
            case 0:
                printf("\n .....Exit.....");
            break;
            default:
                printf("\n Wrong Choice");
            break;
        }
    }while (ch!=0);  
}