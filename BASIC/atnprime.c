#include<stdio.h>
void main()
{
	int n=2,i,n1=1,range;
	printf("ENTER THE RANGE : ");
	scanf("%d",&range);
	while(n<=range)
	{
		if(n>1)
		{
			for(i=2;n>i;i++)
			{
				n1=n%i;
				if(n1==0)
				{
					break;
				}
			}
			if(n1!=0)
			{
				printf("%d\n",n);
			}
		}
		n++;
	}
}
