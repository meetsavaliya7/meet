#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("anter valu x : ");
	scanf("%d",&x);
	printf("anter valu y : ");
	scanf("%d",&y);
	if(x<2000||x>3000)
	{
		printf(" the value of x(%d) is  eligible",x);
	}
	if (y>=100&&y<=500)
	{
		printf("the value of y(%d) is eligible",y);
	}
	getch ();
}