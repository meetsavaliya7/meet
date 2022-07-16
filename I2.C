#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,n;
	clrscr();
	printf("enter value : ");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		printf("\t %d",a);
	}
	getch();
}

