#include<stdio.h>
int main()
{
	int a,i,b=1,range,count=0;
	printf("ENTER THE LIMITE : ");
	scanf("%d",&range);
	for(a=2;a>0;a++)
	{                                                              
		if(count<range)
		{
			for(i=2;a>i;i++)
			{
				b=a%i;
				if(b==0)
				{
					i++;
				}
			}
			if(b!=0)
			{
				printf("%d\n",a);
				count++;
			}
		}
		if(count==range)
		{
			break;
		}
	}
}
