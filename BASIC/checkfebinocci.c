#include<stdio.h>
void main()
{
	int a=0,b=1,c,n,count=0,ncopy;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	c=b; 
	while(count<=n)
	{
		a=b;
		b=c;
		c=a+b;
		count=count+1;
		if(a==n)
		{
			printf("**FEBINOCCI**\n");
		}
	}
	if(a==n)
	{
		printf("\n");
	}
	else
	{
		printf("NOT FEBINOCCI\n");
	}

}
