#include<stdio.h>
void main()
{
	int n,multi=1,i=1;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		multi=multi*i;
		printf("%d",i);
		if(i!=n)
		{
		   printf("x");
		}   
		i++;
		
	}
	printf(" = %d\n",multi);
}
