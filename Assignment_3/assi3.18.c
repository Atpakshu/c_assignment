//Write a program to print the tables of the numbers from 1 to 10.

#include<stdio.h>
int main()
{
 int j,num=1,res;
 
 for(num = 1; num <= 10; num++)
 {
  for(j = 1; j <= 10 ; j++)
  {
    res = num * j;
	printf("Table of given number is : %d\n",res);
  }
  printf("\n");
 }
return 0;
}
