/*Q:Write a program to generate all combinations of 1, 2 and 3 using for loop*/
#include<stdio.h>
int main()
{
  int a[3],b[3]=(),i,j,i1;
  printf("Enter the number:");
  for(i=0;i<3;i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=0;j<10;j++)
  {
    for(i=0;i<3;i++)
    {
      if(j==a[i])
      {
        for(i1=0;i1<3;i1++)
        {
          if(j!=b[i1])
          {
            b[i]=a[i1];
            printf("%d\n",b[i1]);
          }
        }
      }
    }
  }
}
