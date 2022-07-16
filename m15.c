#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[100],str2[100];
	int n;
	printf("enter string length : ");
	gets(str1);
	n=strlen(str1);
	printf("\n  string length : %d",n);
	printf("\n str1 : %s ",str1);
	strrev(str1);
	printf("\n string reverse %s ",str1);
	
	printf("\n str1 : %s",str1);
	strupr(str1);
	printf("\n string upper case %s",str1);
	
	printf("\n str1 : %s ",str1);
	strlwr(str1);
	printf("\n string lower case %s ", str1);

	strcpy(str2,str1);
	printf("\n str2  : %s ",str2);
	printf("enter string str2 :");
	gets(str2);

	
	printf(" \n string compare case sensitive : %d",strcmp(str1,str2));
	printf("\n string compare in sensitive : %d", strcmpi(str1,str2));

	
	strcat(str2,str1);
	printf("\n string carnatanation : %s ", str2);
}