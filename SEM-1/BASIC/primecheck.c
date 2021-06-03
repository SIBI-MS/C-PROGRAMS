#include<stdio.h>
void main()
{
	int n,i,n1=1;
	printf("ENTER THE NUMBER");
	scanf("%d",&n);
	if(n>1)
	{
		for(i=2;n>i;i++)
		{
			n1=n%i;
			if(n1==0)
			{
				printf(" NOT PRIME NUMBER\n");
				break;
			}
		}
		if(n1!=0)
		{
			printf("PRIME NUMBER\n");
		}
	}
	else
	{
		printf("NOT A PRIME NUMBER\n");
	}
}
