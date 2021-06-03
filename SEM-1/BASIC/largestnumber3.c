#include<stdio.h>
void main()
{
	/*TO FIND THE 1ST AND SECOND LARGEST NUMBER AMOUNG THREE NUMBERS*/
	int a,b,c;
	printf("ENTER THE THREE NUMBERS");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("1ST LARGEST NUMBER IS %d\n",a);
			if(b>c)
			{
				printf("2ND LARGEST NUMBER IS %d\n",b);
			}
			else if(c>b)
			{
				printf("2ND LARGEST NUMBER IS %d\n",c);
			}
		}
		
	}
	 else if(b>a)
	{
		if(b>c)
		{
			printf("1ST LARGEST NUMBER IS %d\n",b);
			if(a>c)
			{
				printf("2ND LARGEST NUMBER IS %d\n",a);
			}
			else if(c>a)
			{
				printf("2ND LARGEST NUMBER IS %d\n",c);
			}	
		}
		
	}
	else if(c>a)
	{
		if(c>b)
		{
			printf("1ST LARGEST NUMBER IS %d\n",c);
			if(a>b)
			{
				printf("2ND LARGEST NUMBER IS %d\n",a);
			}
			else if(b>a)
			{
				printf("2ND LARGEST NUMBER IS %d\n",b);
			}
			
		}
		
	}
	
}
