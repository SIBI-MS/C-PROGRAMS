#include<stdio.h>
int main()
{
	/*Q:Given a point (x,y), write a program to find out
	 if it lies on the X-axis, Y-axis or on the origin*/
	 float x,y;
	 printf("ENTER THE CORDINATES : ");
	 scanf("%f%f",&x,&y);
	 if(x==0 && y==0)
	 {
	 	printf("LIES ON ORIGIN\n");
	 }
	 else if(x==0)
	 {
	 	printf("LIES ON Y-AXIS\n");
	 }
	 else if(y==0)
	 {
	 	printf("LIES ON X-AXIS\n");
	 }
}
