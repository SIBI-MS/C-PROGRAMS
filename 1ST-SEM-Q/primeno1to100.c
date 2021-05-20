/*Q:Write a program to print all prime numbers
from 1 to 300. (Use nested loops, break and continue)*/
#include<stdio.h>
int main()
{
	int n=2,i,n1=1;
	for(n=2;n<=300;n++)
	{
		if(n>1)
		{
			for(i=2;n>i;i++)
			{
				n1=n%i;
				if(n1==0)
				{
					break;
				}
			}
      (n1!=0)?printf("%d\n",n):n1;
		}
	}
}
