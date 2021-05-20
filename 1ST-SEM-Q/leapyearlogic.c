#include<stdio.h>
void main()
{
 /* Q:A year is entered through the keyboard. Write a
  program to determine whether the year is leap
  year or not. Use logical operators && and ||.*/
  int year;
  printf("Enter the year: ");
  scanf("%d",&year);
  if((year%4==0 && year%100!=0)  || (year%100==0 && year%400==0))
  {
    printf("%d is leap year\n",year);
  }
  else
  {
   printf("Not leap year\n");
  }
}
