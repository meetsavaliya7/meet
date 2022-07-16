#include<stdio.h>
int main ()
{
	int a[10],i,n;
	printf("\n enter desimal value : ");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	n=i;
	printf("\n binary value : ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[n-i-1]);
	}
}
	
	