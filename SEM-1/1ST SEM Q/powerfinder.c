#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,i;
  float res=1;
  printf("enter first number");
  scanf("%d",&a);
  printf("enter second number");
  scanf("%d",&b);
  for(i=1;i<=abs(b);i++)
  {
    res=res*a;
  }
  if(b<0)
  {
    res=1/res;
  }
  printf("%d^%d=%f\n",a,b,res);
}
