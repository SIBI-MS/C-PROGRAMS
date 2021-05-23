#include<stdio.h>
int main()
{
  char a[20];
  int i,length=0,j;
  printf("enter the word");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    length++;
  }
  for(i=0,j=length-1;i<j;i++,j--)
  {
    printf("%d\n",i);
    if(a[i]!=a[j])
    {
      break;
    }
  }
  if(i<j)
  {
    printf("not palindrome\n");
  }
  else
  {
    printf("palindrome\n");
  }
}
