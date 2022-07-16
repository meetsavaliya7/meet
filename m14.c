#include<stdio.h>
int main()
{
        int i=0,com=0;
        char str1[100],str2[100];
        printf("Enter a string 1\n");
        gets(str1);
        printf("Enter a string 2\n");
        gets(str2);
 
        for(i=0;str1[i]==str2[i]&&str1[i]=='\0';i++);
		
			if(str1[i]<str2[i])
			{
                printf("String1 is greater than string 2\n");
			}
			else if(str1[i]>str2[i])
			{
                printf("String1 is less than string 2\n");
			}
			else
			{
				 printf("Both strings are equal\n");
			} 
				
		
}