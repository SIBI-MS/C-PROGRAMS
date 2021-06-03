#include<stdio.h>
#include<math.h>
int main()
{
	/*Given the coordinates (x,y) of the centre of a
	 circle and its radius, write a program that will 
	 determine whether a point lies inside the circle,
	  on the circle or outside the circle.*/
	float x,y,r;
	printf("ENTER THE (1ST)CORDINATES (X,Y) AND (2ND)RADIUS : ");
	scanf("%f%f%f",&x,&y,&r);
	if(sqrt((pow(x,2)+pow(y,2)))<=r)
	{
		printf("INSIDE THE CIRCLE\n");
	}
	else
	{
		printf("OUTSIDE THE CIRCLE\n");
	}
}
