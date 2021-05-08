#include<stdio.h>
#include<math.h>
void main()
{
	int n,b,a;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	a=cbrt(n);
	b=a*a*a;
	if(n==b)
	{
		printf("%d PERFECT CUBE\n ",a);	
	}
	else
	{
		printf(" THE NUMBER : %d IS NOT A PERFECT CUBE\n",n);
	}
	
}
