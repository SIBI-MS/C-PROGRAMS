#include<stdio.h>
void main()
{
	int n=1,i=1,sum,count=0;
	while(count<5)
	{
		sum=0;
		i=1;
		while(i<n)
		{
		
			if(n%i==0)
			{
				sum=sum+i;
			}	
			i=i+1;
		}
					}
			if(n==sum)
			{
				printf("%d\n",sum);
				count=count+1;
			}
			n=n+1;

	}
	
}
