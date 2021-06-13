/*Write a menu driven program which has the following options
a.Factorial of a number
b.Prime or Not
c.Odd or even
d.Exit
	One a menu item is selected the appropriate action should be taken and once
   this action is finished, the menu should reappear. Unless the user selects
   the “Exit” option, the program should continue to run*/
   #include<stdio.h>
   int main()
   {
     int opt,num,c,i;
     do
     {
       printf("1-Factorial of a number\n2-Prime or Not\n3-Odd or even\n4-Exit\nChoose your option:");
       scanf("%d",&opt);
       if(opt<5 || opt>0)
       {
         (opt!=4)? printf("Enter the number:"),scanf("%d",&num):num;
         switch(opt)
         {
           case 1:
           for(c=1,i=1;i<=num;i++)
           {
             c=c*i;
           }
           printf("\n\nFactorial of %d!=%d\n\n",num,c);
           break;
           case 2:
           for(c=0,i=2;i<=num/2;i++)
           {
             if(num%i==0)
             {
               c=1;
               break;
             }
           }
           (c==0 && num>=2)? printf("\n\n%d is a prime number\n\n",num):printf("\n\n%d is not a prime number\n\n",num);
           break;
           case 3:
           (num%2==0)?printf("\n\nEven number\n\n"):printf("\n\nOdd number\n\n");
           break;
           case 4:
           printf("\nBye!\n");
           break;
          }
        }
        else
        {
          printf("\nPlease choose a valid option\n");
        }
      }while(opt!=4);
   }
