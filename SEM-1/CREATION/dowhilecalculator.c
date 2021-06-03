#include<stdio.h>
void main()
{
  int n;
  float c,b,r;
  do
  {
     printf("C A L C U L A T O R\n");
     printf("###################\n\n");
     printf("ENTER 0 FOR EXIST\nENTER 2 FOR ADDITION\nENTER 3 FOR SUBTRACTION\nENTER 4 FOR MULTIPLICATION\nENTER 5 FOR DIVISION\n");
     printf("ENTER YOUR CHOICE : ");
     scanf("%d",&n);
     if(n>1 && n<6)
     {
      	printf("ENTER THE NUMBERS : ");
      	scanf("%f%f",&c,&b);
      	printf("\n\n");
     }
  	switch(n)
  	{
  		case 2:
  			r=c+b;
  			printf(" SUM : %f + %f = %f\n\n\n",c,b,r);
  			break;
  		case 3:
  			r=c-b;
  			printf("DIFFERENCE : %f - %f = %f\n\n\n",c,b,r);
  	  		break;
  		case 4:
  			r=c*b;
  			printf("PRODUCT : %f X %f = %f\n\n\n",c,b,r);
  			break;case 5:
		case 5:
  			r=c\b;
  			printf("QUATIENT : %f / %f = %f\n\n\n",c,b,r);
  			break;
                case 0:
			printf("GOOD BYE...!!\n\n");
		default:
			printf("INVALID CHOICE\n\n");
  	}
  }while(n!=0);
}
