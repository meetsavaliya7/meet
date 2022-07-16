#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,a;
	clrscr();
	printf("enter value a ");
	scanf("%d",&a);
	for(i=2;i<=50;i+=2)
	{
		printf("\t %d",i);
	}
	getch();
}