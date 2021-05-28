/*Q:Write a program to print all prime numbers
from 1 to 300. (Use nested loops, break and continue)*/
#include<stdio.h>
int main()
{
	int n,i,n1=1;
	for(n=1;n<=300;n++)
	{
		for(i=2;n>i;i++)
		{
			n1=n%i;
			if(n1==0)
			{
				break;
			}
		}
		if(n1==0 || n==1)
		{
			continue;
		}
	  printf("%d\n",n);
	}
}
