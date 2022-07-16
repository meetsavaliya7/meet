#include<stdio.h>
#include<conio.h>
void main ()
{
	float a,i,b=0.5;
	clrscr();
	printf("enter a :");
	scanf("%f",&a);
	for(i=0.5;i<=a;i++)
	{
		printf("\t %.1f",b);
		b+=i;
	}
	getch();
}