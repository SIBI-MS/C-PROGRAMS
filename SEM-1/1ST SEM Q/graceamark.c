/*Write a program to find the grace marks for a student using switch.
 The user should enter the class obtained by the student and the number of subjects he has failed in.
 use the following logic:
1.If the student gets first class and the number of subjects he failed in is greater than 3,
 then he does not get any grace. Otherwise the grace is 5 marks per subject.
2.If the student gets second class and the number of subjects he failed in is greater than 2,
 then he does not get any grace. Otherwise the grace is 4 marks per subject.
3.If the student gets third class and the number of subjects he failed in is greater than 1,
 then he does not get any grace. Otherwise the grace is of 5 marks.
*/
#include<stdio.h>
int main()
{
  int c,s;
  printf("Choose\n1-1st class\n2-2nd class\n3-3rd class:");
  scanf("%d",&c);
  printf("Enter no.of subjects you failed:");
  scanf("%d",&s);
  switch(c)
  {
    case 1:
      (s<=3)?printf("You will get %d grace marks\n",s*5):printf("You won't get any grace mark\n");
      break;
    case 2:
      (s<=2)?printf("You will get %d grace marks\n",s*5):printf("You won't get any grace mark\n");
      break;
    case 3:
      (s<=1)?printf("You will get %d grace marks\n",s*5):printf("You won't get any grace mark\n");
      break;
  }
}
