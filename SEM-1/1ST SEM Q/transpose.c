//Write a program to find the transpose of a matrix
#include<stdio.h>
int main()
{
  int a[50][50],i,j,m,n;
  printf("Enter the no.of rows an colums:");
  scanf("%d%d",&m,&n);
  printf("Enter the matrics:");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",a[j][i]);
    }
      printf("\n\n");
  }
}
