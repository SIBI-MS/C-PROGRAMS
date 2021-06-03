/*
  PROGRAM TO PRINT ALL COMBINATIONS OF 1, 2 & 3 USING FOR LOOP
  AUTHOR : sibi
  CREATED ON : 19/05/2021
*/
#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<4;i++)
  {
    for(j=1;j<4;j++)
    {
      for(k=1;k<4;k++)
      {
        if(i!=j && i!=k && j!=k)
        {
          printf("%d%d%d\n",i,j,k);
        }
      }
      printf("\n");
    }
  }
}
