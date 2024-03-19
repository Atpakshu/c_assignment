/*Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
*/

#include<stdio.h>
int main()
{
   int num,rem=0,temp=0;
   printf("Enter the number : \n");
   scanf ("%d",&num);

   while(num > 0)
  {
   rem = num % 10;
   num = num/10;
   temp = temp + rem;
  }

  printf("adiition of entered no is: %d \n",temp);


return 0;

}



