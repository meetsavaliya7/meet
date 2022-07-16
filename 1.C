#include<stdio.h>
#include<conio.h>
void main ()
{
	int a;
	clrscr();
	printf("enter the no.");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("no. is devisibal by 5");
	}
	else
	{
		printf("no. is not devisibal by 5");
	}
	getch ();

}