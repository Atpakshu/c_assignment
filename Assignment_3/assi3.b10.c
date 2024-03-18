//Write a program to print table of given number using for loop

#include<stdio.h>
int main()
{
  int num,i ,res=1;
  printf("Enter a number : \n");
  scanf("%d",&num);
 
  for(i=1; i<= 10; i++)
  {
   res = num * i;
	printf("Table of given number is : %d\n",res);
  }
return 0;
}
