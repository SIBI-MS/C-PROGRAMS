#include<stdio.h>
void main()
{
	int n=1;
	float c,b,s;
	printf("\n\n");
	while(0<n)
	{
		printf("\n\nC A L C U L A T O R\n");
		printf("###################");
		printf("\n\n");
		printf("ENTER 0 FOR EXIST\nENTER 2 FOR ADDITION\nENTER 3 FOR SUBTRACTION\nENTER 4 FOR MULTIPLICATION\nENTER 5 FOR DIVISION\n");
  	        printf("ENTER YOUR CHOICE : ");
		scanf("%d",&n);
		if(n==0)
		{
			printf("BYE....!\n");
		}
		else if(n<6)
		{
			if(n>1)
			{
				printf("ENTER THE NUMBERS : ");
				scanf("%f%f",&c,&b);
				switch(n)
				{
					case 2:
						s=c+b;
						printf("\n\n");
						printf(" SUM : %f + %f = %f\n",c,b,s);
						printf("\n\n");
						break;
					case 3:
						s=c-b;
						printf("\n\n");
						printf("DIFFERENCE : %f - %f = %f\n",c,b,s);
						printf("\n\n");
						break;
					case 4:
						s=c*b;
						printf("\n\n");
						printf("PRODUCT : %f X %f = %f\n",c,b,s);
						printf("\n\n\n");
						break;
					case 5:
						s=c/b;
						printf("\n\n");
						printf("QUATIENT : %f / %f = %f\n",c,b,s);
						printf("\n\n\n");
						break;
				}
		      }
		}
		else
		{
			printf("\nINVALID CHOICE!!!!!!\n");
		}	
	}
		
}
