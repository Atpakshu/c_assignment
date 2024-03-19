/*Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3*/

#include<stdio.h>
void main()
{
  int a=0,b=0,R=0,GCD = 0;
  printf("Enter the numbers please: ");
  scanf("%d %d",&a,&b);
  R = a%b;
  a =b;
  b = R;
  while((a%b)>0)
  {
    R = a%b;
    a = b;
    b = R;
  }
  GCD = b;
  printf("GCD of two numbers %d\n",GCD);
}
