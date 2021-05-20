/*Q:Write a program to add the first seven terms of the following series using for loop*/
#include<stdio.h>
int main()
{
  float i,j,sum=0,fact=1;
  for(i=0;i<=7;i++)
  {
    for(j=1;j<=i;j++)
    {
      sum=sum+(i/(fact=fact*i));
    }
  }
  printf("%f\n",sum);
}
