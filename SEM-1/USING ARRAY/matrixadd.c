#include<stdio.h>
int main()
{
   int a[20][20],b[20][20],i,j,m,n,sum;
   printf("ENTER THE ORDER OF TWO MATRICES(SHOULD BE LESS THAN 20x20) : ");
   scanf("%d%d",&m,&n);
   if(m<=20 && n<=20)
   {
      printf("ENTER THE 1ST MATRIX : ");
      for(i=0;i<m;i++)
      {
         for(j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
         }
      }
      printf("ENTER THE 2ND MATRIX : ");
      {
         for(i=0;i<m;i++)
         {
            for(j=0;j<n;j++)
            {
               scanf("%d",&b[i][j]);
            }
         }
      }
      printf("SUM OF TWO MATRICES\n");
      for(i=0;i<m;i++)
         {
            for(j=0;j<n;j++)
            {
               sum=a[i][j]+b[i][j];
               printf("%d\t",sum);         
            }
            printf("\n");
         }
   }
   else
   {
      printf("SHOULD BE LESS THAN 20x20\n");
   }
}
