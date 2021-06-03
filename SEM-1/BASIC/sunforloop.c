#include<stdio.h>
void main()
{
	int n,count,sum=0;
	printf("ENTER THE LIMITE : ");
	scanf("%d",&n);
	for(count=1;count<=n;count++)
	{
		sum=sum+count;
	}
	printf("SUM OF THE N DIGITS = %d\n",sum);
	
}
