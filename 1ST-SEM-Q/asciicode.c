/*Q:Write a program to print all ASCII values
 and their equivalent characters using a while loop*/
 #include<stdio.h>
 int main()
 {
   int i;
   for(i=0;i<128;i++)
   {
     printf("%d-%c\n",i,i);
   }
 }
