#include<stdio.h>
void main()
{
	int y;
	printf("ENTER THE NUMBER");
	scanf("%d",&y);
	if(y%100==0)
	{
		if(y%400==0)
		{
			printf("LEAP YEAR\n");
		}
		else
		{
			printf("NOT LEAP YEAR\n");
		}
	}
	else
	{
		if(y%4==0)
		{
			printf("LEAP YEAR\n");
		}
		else
		{
			printf("NOT LEAP YEAR\n");
		}
	}
}
