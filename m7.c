#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a[5],acc[5],state[5],eco[5],ocm[5],total[5],grade[5];
	float per[5];
	for(i=0;i<5;i++)
	{
		printf("Account[%d] : ",i);
		scanf("%d",&acc[i]);
		printf("state[%d] : ",i);
		scanf("%d",&state[i]);
		printf("eco[%d] : ",i);
		scanf("%d",&eco[i]);
		printf("ocm[%d] : ",i);
		scanf("%d",&ocm[i]);
		
	}
		
		
	for(i=0;i<5;i++)
	{
		printf("\n Account[%d] - %d ",i,acc[i]);
		printf("\t state[%d] - %d ",i,state[i]);
		printf("\t eco[%d] - %d ",i,eco[i]);
		printf("\t ocm[%d] - %d ",i,ocm[i]);

		total[i]=acc[i]+state[i]+eco[i]+ocm[i];
		printf("\t total[%d] : %d",i,total[i]);
	
		per[i]=total[i]*100/400;
		printf("\t per[%d] : %f",i,per[i]);


		if(per[i]>90)
		{
			printf("\t grade : A");
		}
		if(per[i]<90 && per[i]>80)
		{
			printf("\t grade : B");
		}

		if(per[i]<90 && per[i]>80)
		{
			printf("\t grade : C");
		}

		if(per[i]<80 && per[i]>70)
		{
			printf("\t grade : D");
		}

		if(per[i]<60 && per[i]>50)
		{
			printf("\t grade : E");
		}

		if(per[i]<50 && per[i]>40)
		{
			printf("\t grade : F");
		}

		if(40<per[i])
		{
			printf("\t grade : FAIL");
		}
		
	}
		
		
	
}