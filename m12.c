#include<stdio.h>
int main()
{		
		int i,k,j;
		char s1[20],s2[20];
		
		printf("enter orignal string :");
		gets(s1);
		for(k=0;s1[k]!='\0';k++);
		for(i=0,j=k-1;i<k;i++,j--)
		{
				s2[j]=s1[i];
		}
		s2[k]='\0';
		printf("\nreverse string :%s",s2);
}