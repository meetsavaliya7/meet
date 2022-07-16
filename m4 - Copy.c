#include<stdio.h>
int main ()
{
	int  i=1,j;
	while(i<=5)
	{
		while(j<=i)
		printf("\t %d",i);
		i++;
	}
	printf("\n");
	return 0;
}
