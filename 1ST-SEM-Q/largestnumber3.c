/*Q:Using the Conditional operator, write a
 program to determine the largest among three numbers*/
 #include<stdio.h>
 int main()
 {
  int n1,n2,n3,n;
  printf("Enter the numbers:");
  scanf("%d%d%d",&n1,&n2,&n3);
  n=(n2>n1)?((n2>n3)?n2:n3):((n1>n3)?n1:n3);printf("Largest number is %d\n",n);
}
