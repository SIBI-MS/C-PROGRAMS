#include<stdio.h>
void main()
{
	printf("*********IF YOU WANT TO STOP PLEASE ENTER ZERO********\n");
	int i=1,sum=0;
	printf("ENTER THE NUMBER\n");
	while(0<i)
	{
		int a;
		printf("\n");
		scanf("%d",&a);
		sum=sum+a;
		printf("SUM = %d\n",sum);
		if(a==0)
		{
			i=-5;
		}
		
	}
	                                                    
}
