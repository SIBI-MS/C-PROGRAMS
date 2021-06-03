#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,p;
	printf("ENTER THE LENGTHS OF THREE SIDES OF TRIANGLE : ");
	scanf("%d%d%d",&b,&c,&d);
	p=(b+c+d)*0.5;
	a=sqrt((p*(p-b)*(p-c)*(p-d)));
	printf("AREA OF TRIANGLE IS : %d \n",a);
}
