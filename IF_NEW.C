#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr ();
	printf("\n enter value of a ");
	scanf("%d",&a);
	if(a>=0)
	{
		printf("\n\t  value of a(%d) possitivea",a);
	}
	else
	{
		printf("\n\t value of a(%d) negative",a);
	}
	getch ();
}