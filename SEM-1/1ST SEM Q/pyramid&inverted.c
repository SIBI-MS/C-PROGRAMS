#include<stdio.h>
int main()
{
  int i,n,j;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(i=(n*2)-1,n=0;i>0;i=i-2)
  {
    for(j=0;j<i;j++)
    {
      printf("&");
    }
    n++;printf("\n");
    for(j=0;j<n;j++)
    {
      printf(" ");
    }
  }
}
