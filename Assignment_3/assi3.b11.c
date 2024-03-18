/*Write a program to find factorial of given number using for loop
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120*/


#include<stdio.h>
int main()
{
  int num,fact=1,i;
  printf("Enter a number : \n");
  scanf("%d",&num);

  for(i =1 ; i <= num ; i++)
 {
   fact = fact * i;
 }
  printf("Factorial of given number is :%d \n",fact);
return 0;
}
