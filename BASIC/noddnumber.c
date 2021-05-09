#include<stdio.h>
void main()
{
   int n,count=0;
   printf("ENTER THE LIMITE : ");
   scanf("%d",&n);
   while(count<=n)
   {
      if(count%2!=0)
      {
         printf("%d\n",count);
      }
      count++;
   }
}
