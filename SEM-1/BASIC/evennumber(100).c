#include<stdio.h>
void main()
{
	int i=1,count=0;
	while(count<100)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			count=count+1;
		}
		i=i+1;
	}
}
