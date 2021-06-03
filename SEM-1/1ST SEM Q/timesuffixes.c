/*Q;Write a program to print 24 Hours of a date with
 suitable suffixes such as AM, PM, Noon, Midnight*/
 #include<stdio.h>
 int main()
 {
   int i,t=1;
   printf("12-Midnight\n");
   for(i=1;i<12;i++)
   {
     printf("%d AM\n",i);
   }
   printf("12-Noon\n");
   for(i=1;i<12;i++)
   {
     printf("%d PM\n",i);
   }
 }
