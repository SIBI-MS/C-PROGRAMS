/*Write a program to find the range of a set of numbers
entered through the keyboard. Range is the difference
between the smallest and biggest number in the list*/
#include<stdio.h>
int main()
{
  int a[100],i,n,j,temp;
  printf("How many numbers:");
  scanf("%d",&n);
  printf("Enter the numbers:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      (a[i]>a[j])?temp=a[i],a[i]=a[j],a[j]=temp:a[i];
    }
  }
  printf("Range=%d\n",a[n-1]-a[0]);
}
