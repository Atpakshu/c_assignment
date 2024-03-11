//Write a program to accept number and check whether the number is +ve, -ve and zero

#include<stdio.h>
int main()
{
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);

  if(a>0)
  {
   printf("Given number is positive ");
  }
  else if(a<0)
  {
  printf("Given number is negative ");
  }
  else if(a==0)
  {
  printf("Given number is zero ");
 }
return 0;
}
