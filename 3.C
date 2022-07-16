#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr ();
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	c=a*b;
	printf("the prouduct is b(%d)",c);
	if(c%3==0&&c%7==0)
	{
		printf("divisible by 3 and 7 ");
	}
	else
	{
		printf("is divisibal dose not by 3 and 7");
	}
	getch ();

}


