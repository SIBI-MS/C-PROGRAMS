#include<stdio.h>
#include<math.h>
void main()
{
	/*Q:Write a program to receive values of latitude (L1,L2) 
	and longitude(G1,G2) in degrees of two places on earth and
	 output the distance (D) in nautical miles. The formula for
	  the distance in nautical miles is
          D = 3963 cos-1(sin L1 sin L2 + cos L1 cos L2 * cos(G2-G1))*/
	float l1,l2,g1,g2,d;
	printf("ENTER LATITUDE AND LONGITUDE OF 1ST PLACE : ");
	scanf("%f%f",&l1,&g1);
	printf("ENTER LATITUDE AND LONGITUDE OF 2ND PLACE : ");
	scanf("%f%f",&l2,&g2);
	l1=l1*(3.14/180);
	l2=l2*(3.14/180);
	g1=g1*(3.14/180);
	g2=g2*(3.14/180);
	d=3963*acos((sin(l1)*sin(l2)))+(cos(l1)*cos(l2)*(cos(g2-g1)));
	printf("DISTENCE(nm) : %f\n",d);
}
