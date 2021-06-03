#include<stdio.h>
int main()
{
  int n,j,i;
  printf("Enter the limite:");
  scanf("%d",&n);
  for(n=n+65,i=65;i<n;i++)
  {
    for(j=65;j<=i;j++)
    {
      printf("%c\t",j);
    }
    printf("\n");
  }
}
