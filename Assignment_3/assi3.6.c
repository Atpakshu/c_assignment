/*Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12*/


#include<stdio.h>
int main()
{
  int num,i=1,res;
  printf("Enter a number : \n");
  scanf("%d",&num);
//  for(i = 1; i < num; i++)
 while(i < num)
  {
   if( num % i == 0)
	{
	 printf("factors are : %d\n",i);
	 }
	 i++;
  }
return 0;
}
