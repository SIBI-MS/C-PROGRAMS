#include<stdio.h>
int main()
{
  int n,n1,n2,n3=3,i,i1,e,j,flag=0;
  printf("Enter the no.of triangle:");
  scanf("%d",&n);
  e=2+((n-1)*3);
  n1=e;
  n2=n*2;
  n--;
  for(i=0;i<=e;i++)
  {
    for(j=0;j<=n1;j++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      if(n2!=i)
      {
        printf("* ");
      }
      else if(n2==i)
      {
        for(i1=0;i1<n;i1++)
        {
            printf("* ");
        }
        if(flag!=1)
        {
          for(i1=0;i1<n3;i1++)
          {
            printf("*");
          }
          printf(" ");
          n3=n3+6;
          flag=1;
        }
        else if(flag==1)
        {
          j=100;
          n2++;
          n--;
        }
      }
    }
      printf("\n");
      n1--;
      j=0;
      flag=0;
  }
}
