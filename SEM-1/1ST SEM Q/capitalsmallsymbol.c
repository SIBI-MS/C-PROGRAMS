#include<stdio.h>
int main()
/*Q:If a character is entered through the keyboard,
 write a   program  to determine whether the character
  is a capital letter, small letter, a digit or socal symbol.*/
{
  char letter;
  printf("Enter the letter:");
  letter=getchar();
  if(letter>=65 && letter<=90)
  {
    printf("Capital letter\n");
  }
  else if(letter>=97 && letter<=122)
  {
    printf("Small letter\n");
  }
  else if(letter<=57 &&  letter>=48)
  {
    printf("Digit\n");
  }
  else if(letter>=0)
  {
    printf("Socal symbol\n");
  }
}
