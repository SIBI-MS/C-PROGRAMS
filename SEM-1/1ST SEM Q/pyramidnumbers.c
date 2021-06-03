/*Q:Write a program to produce the following output*/
#include<stdio.h>
int main()
{
  int i=1,j,n,count,n1;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(n1=n,count=1;count<=n;count++)
  {
    for(j=0;j<n1;j++)
    {
      printf("\t");
    }
    for(j=0;j<count;i++,j++)
    {
      printf("%d\t\t",i);
    }
    printf("\n");n1--;
  }
}
