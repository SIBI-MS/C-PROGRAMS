#include<stdio.h>
void main()
{
	int n=1,count=0;
	while(count<500)
	{
		if(n%11==0)
		{
		  	if(n>=100)
				 {
				  	if(n<=500)
				 	               {
				 				printf(":%d\n",n);
				 				count=count+1;
				 				
				 			}
				 } 

		}
	 n=n+1;
	}
	
}


