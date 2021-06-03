#include<stdio.h>
int main()
{
	/*Write a program to find the absolute value of a 
	number entered through the keyboard (Do not use math functions)*/
	float n,ncopy;
	printf("ENTER THE NUMBER : ");
	scanf("%f",&n);
	ncopy=n;
	if(n>0)
	{
		printf("ABSOLUTE VALUE |%f| : %f\n",n,n);
	}
	else
	{
		n=n*-1;
		printf("ABSOLUTE VALUE |%f| : %f\n",ncopy,n);
	}
}
