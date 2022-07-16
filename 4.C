#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b,c;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("value of a(%d) is greter b(%d) and c()%d",a,b,c);
	}
	else if (b>a&&b>c)
	{
		printf(" value of b(%d) is greter a(%d) and c(%d)",b,a,c);
	}
	else if (c>a&&c>b)
	{
		printf("value of c(%d) is greter a(%d) and b(%d)",c,a,b);
	}
	else if (a==c&&a==b)
	{
		printf("value of a(%d) is greter c(%d) and b(%d)",a,c,b);
	}
	getch();
}