/*Q:Write a program to print the multiplication table (up to 20)
 of the number entered by the user. The table should be displayed in the following form*/
 #include<stdio.h>
 int main()
 {
   int n,i,m=0;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=1;i<=10;i++,m=0)
   {
     m=m+(n*i);
     printf("%dx%d=%d\n",i,n,m);
   }
 }
