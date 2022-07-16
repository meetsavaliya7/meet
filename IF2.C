#include<stdio.h>
#include<conio.h>
void main ()
{
	int a;
	clrscr();
	printf("enter the age of the person : ");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("eigibal for voting");
	}
	else
	{
		printf(" not eigibal for voting");
	}
	getch();
}