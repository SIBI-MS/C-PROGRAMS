#include<stdio.h>
void main()
{
	int count=100,n,a,b,sum=0,coun=0,e=100,g;
	printf("ENTER THE NUMBER");
	scanf("%d%d",&n,&g);
	while(coun<=n)
	{
	while(e<=999)
	{
		if(e>=100)
		{
			while(e!=0)
			{
				a=e%10;
				b=a*a*a;
				sum=sum+b;
				e=e/10;
		        }
		}
		if(sum==count)
		{
			printf("ARMSTRONG NUMBER %d",sum);
			coun=coun+1;
		}
		e=e+1;
		count=count+1;
		e=count;
	}	
		
	}
}
