#include<stdio.h>
void main()
{
	int n,b,sum=0,ncopy;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	ncopy=n;
	 while(n!=0)
	 {
		b=n%10;
		sum=(sum*10)+b;
		n=n/10;
	 }
	if(sum==ncopy)
	{
		printf("PALINDROME NUMBER\n");
	}
	else
	{
		printf("NOT PALINDROME NUMBER\n");
	}
}
