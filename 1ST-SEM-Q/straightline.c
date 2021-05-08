#include<stdio.h>
int main()
{
	/*Given three points (x1,y1), (x2,y2) and (x3,y3), 
	write a program to check if all the three points fall on one straight line*/
	float X1,X2,X3,Y1,Y2,Y3;
	printf("ENTER THE CORDINATES (X1,Y1):(X2,Y2):(X3,Y3):IN THIS ORDER : ");
	scanf("%f%f%f%f%f%f",&X1,&Y1,&X2,&Y2,&X3,&Y3);
	X1=.5*(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
	if(X1==0)
	{
		printf("THREE POINTS ARE IN A STRAIGHT LINE\n");
	}
	else
	{
		printf("THREE POINTS ARE NOT IN A STRAIGHT LINE\n");
	}
}
