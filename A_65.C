#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("enter valu a ");
	scanf("%c",&a);
	for(a;a<='z';a++)
	{
		printf("\n %c - %d",a,a);
	}

	getch();

}