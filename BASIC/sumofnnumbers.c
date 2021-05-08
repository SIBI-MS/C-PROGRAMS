#include<stdio.h>
void main()
{
	
	int sum=0,count=0,n,a;
	printf("HOW MANY NUMBERS DO YOU NEED TO ADD :::: ");
	scanf("%d",&n);
	while(count<n)
	{
		scanf("%d",&a);
		sum=sum+a;
		count=count+1;
	}
	printf("SUM = %d\n",sum);                                            
}
