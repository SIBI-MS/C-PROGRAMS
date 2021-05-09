#include<stdio.h>
void main()
{
   int a[100],i,j,count=0,n;
   printf("ENTER HOW MANY NUMBER NEED YOU ORDER : "); 
   scanf("%d",&n);
   printf("ENTER THE NUMBER : ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }   
   printf("A S C E N D I N G     O R D E R\n");
   for(j=0;j>=0;j++)
   {
      for(i=0;i<n;i++)
      {
         if(a[i]==j)
         {
            printf("%d\n",j);
            count++;
            if(count==n)
            {
               j=-2;
            }
         }
      }
   }
}
