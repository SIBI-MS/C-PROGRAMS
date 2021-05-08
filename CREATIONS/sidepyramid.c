#include<stdio.h>
void main()
{
	int count=0,o=0,n,e=0;
	printf("ENTER THE NUMBER");
	scanf("%d",&n);
	while(count<=n)
	{
		while(e>o)
		{ 	
			printf("#");	
			e=e-1;
		}
		
		printf("\n");
		count=count+1;
		e=e+count;
	}
}
