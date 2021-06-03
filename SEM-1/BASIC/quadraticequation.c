#include<stdio.h>
#include<math.h>
void main()
			/*TO FIND THE SOLUTIONS OF QUADRATIC EQUATION*/
{
	int a,b,c,discriminent;
	float x1;
	printf("ENTER THE COEFFICIENT OF A = ");
	scanf("%d",&a);
	printf("ENTER THE COEFFICIENT OF B = ");
	scanf("%d",&b);
	printf("ENTER THE CONSTANT C = ");
	scanf("%d",&c);
	discriminent=(b*b)-(4*a*c);
	if(discriminent>0)
	{
		x1=(sqrt(discriminent)+b)/(2*a);
		 printf("solution-X1 = %f\n",x1);
		 x1=sqrt(discriminent)+(b*-1)/(2*a);
		 printf("solution-X2 = %f\n",x1);
	}
	else if(discriminent==0)
	{
	    x1=(sqrt(discriminent)+b)/(2*a);
		 printf("solution-X1 = %f\n",x1);
		 x1=(sqrt(discriminent)+(b*-1))/(2*a);
		 printf("solution-X2 = %f\n",x1);
	}
	else
	{
		printf("NO SOLUTION\n");
	}
}
