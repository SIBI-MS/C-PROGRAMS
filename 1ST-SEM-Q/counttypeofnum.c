/*Q:Write a program to enter numbers till the user wants.
 At the end, it should display the count of positive, negative and zeros entered*/
 #include<stdio.h>
 int main()
 {
   int n,n1,i,count=0,count1=0,count2=0;
   printf("How many numbers:");
   scanf("%d",&n);
   printf("Enter the number:");
   for(i=0;i<n;i++)
   {
     scanf("%d",&n1);
     (n1>0)?count++:((n1<0)?count1++:count2++);
   }
   printf("No.of possitive digits-%d\nNo.of negative digits-%d\nNo.of zero digits-%d\n",count,count1,count2);
 }
