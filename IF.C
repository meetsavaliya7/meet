#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b;
	clrscr ();
	printf("\n enter value of a : ");
	scanf("%d",&a);
	printf("\n enter value of b :");
	scanf("%d",&b);
	if(a<b)
	{
		printf("\n\t  a(%d) is greater then b(%d)",a,b);
	}
	else
	{
		printf("\n\t b(%d) is greater then a(%d)",b,a);
	}

	getch ();
}
