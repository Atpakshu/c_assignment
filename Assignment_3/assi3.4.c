/*Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120*/


#include<stdio.h>
int main()
{
  int num,fact=1,i=1;
  printf("Enter a number : \n");
  scanf("%d",&num);

  while(i <= num)
 {
   fact = fact * i;
   i++;
 }
  printf("Factorial of given number is :%d \n",fact);
return 0;
}
