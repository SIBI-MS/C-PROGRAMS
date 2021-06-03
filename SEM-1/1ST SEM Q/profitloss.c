#include<stdio.h>
int main()
{
	/*Q:If the cost price and selling price of an item are
	 input through the keyboard, write a program to determine 
	 whether the seller has made profit or incurred loss. Also
	  determine how much profit he made or loss he incurred*/
	 int sell,cost,d;
	 printf("ENTER THE COST OF THE PRODUCT : ");
	 scanf("%d",&cost);
	 printf("ENTER THE SELLING PRICE OF THE PRODUCT : ");
	 scanf("%d",&sell);
	 d=sell-cost;
	 if(d>0)
	 {
	 	printf("PROFIT : %d\n",d);
	 }
	 else
	 {
		printf("LOSS : %d\n",d);
     } 
}
