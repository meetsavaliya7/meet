#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter the no.");
	scanf("%d",&a);
	if(a%3==0&&a%5==0)
	{
		printf("no. is devisible by 5 and 3");
	}
	else
	{
		printf("no.is not devisible by 5 and 3");
	}
	getch ();

}