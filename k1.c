#include<stdio.h>
int main ()
{
	int i,j,sp=10;
	for(i=5;i>=1;i++)
	{
		
		for(j=1;j>=i;j++)
	{
		printf(" *");
	}
	printf("\n");
	sp++;
	}
	return 0;
}