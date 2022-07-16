#include<stdio.h>
float x,y,z,xyz,per;
int main()
{
	void process();
	printf("\n eng : ");
	scanf("%f",&x);
	printf("\n guj : ");
	scanf("%f",&y);
	printf("\n sci : ");
	scanf("%f",&z);
	process();
	
}
void process()
{
	void print();
	xyz=x+y+z;
	per=xyz/3;
	
	print();
}
void print()
{
	printf("\n Total Marks are : %.2f",xyz);
	printf("\n Percentage are : %.2f",per);
	if(per>40)
	{
		printf("Fail")
	}
	if(per>40&&per<50)
	{
		printf("Grade E");
	}
		else if(per>50&&per<60)
	{
		printf("Grade D");
	}
		else if(per>60&&per<70)
	{
		printf("Grade C");
	}
		else if(per>70&&per<80)
	{
		printf("Grade B");
	}
		 else if(per>80&&per<90)
	{
		printf("Grade A");
	}
		else if(per>90&&per<100)
	{
		printf("Grade A++");
	}
}