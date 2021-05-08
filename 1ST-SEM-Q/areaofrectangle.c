#include<stdio.h>
int main()
{
	/*Q:Given the length and breadth of a rectangle, 
	write a program to find whether the area of the
	 rectangle is greater than its perimeter*/
	 float len,bre,a;
	 printf("ENTER THE LENGTH AND BREADTH OF RECTANGLE : ");
	 scanf("%f%f",&len,&bre);
	 a=len*bre;
	 len=2*(len+bre);
	 if(a>len)
	 {
	 	printf("AREA OF RECTANGLE : %f\n",a);
	 }
	 else
	 {
	 	printf("PERIMETER IS GREATER THAN ITS AREA");
	 }
}
