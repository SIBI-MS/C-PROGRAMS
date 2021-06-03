#include<stdio.h>
int primecheck(int,int,int);
int main()
{
  int n,flag=0,i,j,count=0;
  printf("Please enter the limite:");
  scanf("%d",&n);
  for(i=0;count<n;i++)
  {
    (flag==1)?printf("%d\n",i),count++:i;
    flag=primecheck(i,flag,j);                   //Going to the 14th line(Function call)
  }
}
int primecheck(int flag,int i,int j)             //UDF(Fucnction definition)
{
  for(j=2;j<i/2;j++)
  {
    (i%j==0)?flag=0:(flag=1);                    //To check prime or not
  }
  return flag;                                   //Going to flag and others
}
