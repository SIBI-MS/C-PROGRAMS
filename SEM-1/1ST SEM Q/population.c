/*Q:Population of a town today is 100000. The population has
 increased steadi;y at the rate of 10% per year for the last 10
  years. Write a program to determine the population at the end of each year in the last decade*/
  #include<stdio.h>
  int main()
  {
    int i=10,p=100000;
    for(i=10;i>0;i--)
    {
      p=(p*100)/110;
      printf("%dth year population - %d\n",i,p);
    }
  }
