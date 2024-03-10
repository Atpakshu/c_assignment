/*Write a program to accept an integer value and print its table.*/

#include<stdio.h>
int main()
{
    int i,num,res=1;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(i=1; i<=10; i++)
  {
    res= num * i;
	printf("Table of given no is : %d\n",res);
  }

	return 0;
}
