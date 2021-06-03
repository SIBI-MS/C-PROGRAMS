#include<stdio.h>
void main()
{
	int n,sum=0,c;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	if(n<=99999)
	{
		if(n>=10000)
		{
			while(n!=0)
			{
				c=n%10;
				sum=sum+c;
				n=n/10;
				if(n==0)
				{
					printf("SUM : %d\n",sum);
				}
			}
		}
		else
		{
			printf("ITS NOT A VALID FIVE DIGIT NUMBER\n");
		}
	}
}
