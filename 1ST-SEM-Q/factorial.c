/*Q:Write a program to find the factorial of a number*/
#include<stdio.h>
int main()
{
  int n,i,fact=1;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("Factorial of %d = %d\n",n,fact);
}
