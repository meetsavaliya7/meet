#include<stdio.h>
int main ()
{
	int i,j,a[3][3],b[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][i]);
		}
		printf("\n");
	}
	printf("\n uper : %d",a[0][1]+a[0][2]+a[1][2]);
	printf("\n diongal : %d",a[0][0]+a[1][1]+a[2][2]);
	printf("\n lower : %d",a[1][0]+a[2][0]+a[2][1]);
}

