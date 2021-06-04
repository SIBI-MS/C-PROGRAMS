#include<stdio.h>
void main()
{
	/*Q:Write a program to find the cube root 
	of an integer. If the input is not a perfect cube,
	 display the number is not a perfect cube.*/
	int n,b,a,count=1,c;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	while(count<n)
	{
		b=n%count;
		a=count*count*count;
		
		if(n==a)
		{
			printf("%d PERFECT CUBE ROOT\n ",count);
			count=n;	
		}
		count++;
	}
	if(n!=a)
	{
		printf("NOT A PERFECT CUBE ROOT");	
	}
}
