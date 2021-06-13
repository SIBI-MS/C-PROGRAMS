/*n numbers are entered from the keyboard into an array. The number to be
 searched is entered through the keyboard by the user. Write a program to find if
  the number to be searched is present in the array and if it is present
   display the number of times it appears in the array*/
   #include<stdio.h>
   int main()
   {
     int a[100],i,n1,n2,count=0,n;
     printf("How many numbers:");
     scanf("%d",&n);
     printf("Enter the numbers:");
     for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     }
     printf("Enter the number:");
     scanf("%d",&n1);
     for(i=0;i<n;i++)
     {
       if(a[i]==n1)
       {
         count++;
         n2=n1;
       }
     }
     printf("Number:%d\nNumber of times:%d\n",n2,count);
   }
