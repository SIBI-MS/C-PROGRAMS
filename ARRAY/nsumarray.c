#include<stdio.h>
void main()
{
	int n,a[100],i,sum=0;
	printf("ENTER THE NUMBER(SHOULD BE LESS THAN OR EQUAL TO HUNDRED)");
	scanf("%d",&n);
	if(n<=100)
	{
		printf("PLEASE ENTER THE NUMBERS");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
	}
	else
	{
		printf("PLEASE ENETER THE NUMBER LESS THAN HUNDRED");
	}
	printf("SUM = %d",sum);
}
