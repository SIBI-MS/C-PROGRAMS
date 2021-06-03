#include<stdio.h>
int main()
{
	/*Write a program to check whether a triangle is valid
	 or not, when the three angles of the triangle are entered 
	 through the keyboard. A triangle is valid if the sum of all 
	 the three angles is equal to 180 degrees.*/
	float ang1,ang2,ang3,sum=0;
	printf("PLEASE ENTER THE ANGLES : ");
	scanf("%f%f%f",&ang1,&ang2,&ang3);
	sum=ang1+ang2+ang3;
	if(180==sum)
	{
		printf("VALID TRIANGLE : 180 DEGREE\n");
	}
	else
	{
		printf("NOT VALID TRIANGLE\nNOT EQUAL TO 180\n");
	}
}
