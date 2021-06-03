#include<stdio.h>
int main()
{
  int n,i,j,ncopy;
  printf("Enter the limite:");
  scanf("%d",&n);
  for(ncopy=n,i=1;i<=(n*2)-1;i=i+2)
  {
    for(j=1;j<=i;j++)
    {
      if((n*2)-1==i)
      {
          printf("& ");
      }
      else if(j==1 || j==i)
      {
        if(j==1)
        {
          for(j=1;j<ncopy;j++)
          {
            printf("  ");
          }j=1;
        }
        printf("& ");
      }
      else
      {
        printf("  ");
      }
    }
    ncopy--;printf("\n");
  }
}
