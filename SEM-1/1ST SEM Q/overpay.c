/*Write a program to calculate overtime pay
 of 10 employees. Overtime is paid at a rate
 of Rs. 12.00 per hour for every hour worked above
 40 hours. Assume that employees do not work for
  a fractional part of an hour.*/
  #include<stdio.h>
  int main()
  {
    int i,t=0,n;
    printf("Enter the work time of 10 employees:");
    for(i=0;i<10;i++)
    {
      scanf("%d",&n);
      (n>=40)?t=t+n:printf("Minimum work time is 40\n");
    }
    t=(t-400)*12;printf("Overtime pay of 10 employees-%d\n",t);
  }
