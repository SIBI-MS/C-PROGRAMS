#include<stdio.h>
void main()
{	
	int a,b;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("this the highest value you entered::::%d\n",a);
	}
	else if(b>a)
	{
		printf("this is the highest value you entrted::::%d\n",b);
	}
	
}
