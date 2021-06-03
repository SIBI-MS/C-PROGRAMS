#include<stdio.h>
int main()
/*Q:If three sides of a triangle are entered through the keyboard,
 write a program to check whether the triangle isosceles,
  equilateral or right angled triangle*/
{
  int s1,s2,s3;
  printf("Enter the three sides of the triangle:");
  scanf("%d%d%d",&s1,&s2,&s3);
  if(s1>0 && s2>0 && s3>0)
  {
    if(s1==s2 && s2==s3 && s3==s1)
    {
      printf("The triangle is equilateral\n");
    }
    else if(s1==s2 || s1==s3 || s2==s3)
    {
      printf("The triangle is isosceles\n");
    }
    else if((s1*s1)+(s2*s2)==(s3*s3) || (s1*s1)+(s3*s3)==(s2*s2) || (s2*s2)+(s3*s3)==(s1*s1))
    {
      printf("The triangle is right angled triangle\n");
    }
    else
    {
      printf("Normal traingle\n");
    }
  }
  else
  {
    printf("Please enter the valid triangle\n");
  }
}
