//Write a program to print table of given number.

#include<stdio.h>
int main()
{
  int num,i = 1,res=1;
  printf("Enter a number : \n");
  scanf("%d",&num);
 
  while(i <= 10)
  {
    res =  num * i;
	i++;
	printf("Table of given number is : %d\n",res);
  }
return 0;
}




