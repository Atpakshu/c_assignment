/*Write a program to accept a number and
Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome*/




#include<stdio.h>
int main()

{
  int num,temp,rev=0;
  printf("Enter the number :\n");
  scanf("%d",&num);

  temp = num;

  while(num > 0)
  {
    rev = rev*10;
	rev = rev + num % 10;
	num = num / 10;

 }
     if(temp == rev)
     {
     printf("palindrome no");
     }
     else
     {
      printf(" not palindrome");
     }

return 0;
}
