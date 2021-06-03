#include<stdio.h>
#include<math.h>
void main()
{
	int n,ncopy,ncopye,l=0,sum=0,rem;
	printf("ENTER THE NUMBER:  ");
	scanf("%d",&n);
	ncopy=n;
	ncopye=n;
	while(n>0)
	{
		n=n/10;
		l++;
	}
	while(ncopy>0)
	{
		rem=ncopy%10;
		sum=sum+pow(rem,l);
		ncopy=ncopy/10;
	}
	if(sum==ncopye)
	{
		printf("ARMSTRON NUMBER\n");
	}
	else
	{
		printf("NOT ARMSTRONG NUMBER\n");
	}
	
}
