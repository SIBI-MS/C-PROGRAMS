#include<stdio.h>
void main()
{
   char a[5],b[5];
   int length,i;
   printf("Enter the word : ");
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
      length++;
   }
   for(i=0;i<length;i++)
   {
      b[i]=a[i]-2;                 
      printf("%c\n",b[i]);
   }
}
