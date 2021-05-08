#include<stdio.h>
#include<math.h>
void main()
{
	int n,n1,n2,l=0,sum=0,rem;
	printf("ENTER THE NUMBER:  ");
	scanf("%d",&n);
	n1=n;
	n2=n;
	while(n>0)
	{
		n=n/10;
		l++;
	}
	while(n1>0)
	{
		rem=n1%10;
		sum=sum+pow(rem,l);
		n1=n1/10;
	}
	if(sum==n2)
	{
		printf("ARMSTRON NUMBER");
	}
	else
	{
		printf("NOT ARMSTRONG NUMBER");
	}
	
}
