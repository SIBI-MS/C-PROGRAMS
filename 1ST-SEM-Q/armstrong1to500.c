/*Write a program to print out all
 armstrong numbers between 1 and 500*/
 #include<stdio.h>
 #include<math.h>
 void main()
 {
 	int n,n1,n2,i=0,sum=0,rem;
 	for(n=1;n<=500;n++)
 	{
 		for(n2=n,i=0;n2>0;i++)
 		{
 			n2=n2/10;
 		}
 		for(sum=0,n1=n;n1>0;n1=n1/10)
 		{
 			rem=n1%10;
 			sum=sum+pow(rem,i);
 		}
 		(sum==n)?printf("%d\n",n):sum;
  }
 }
