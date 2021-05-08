#include<stdio.h>
void main()
{
	int a,b,ncopy;
	printf("ENTER THE NUMBER : ");
	scanf("%d%d",&a,&b);
	ncopy=a;
	printf("a = %d\nb = %d\n",a,b);
	printf("INTERCHANGE\n");
	a=b;
	b=ncopy;
	printf("a = %d \nb = %d \n",a,b);	
}
