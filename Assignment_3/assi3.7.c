/*Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24*/

#include<stdio.h>
int main()
{
  int num,i,temp,r;
  printf("Enter a number : \n");
  scanf("%d",&num);
  i = num;
  temp = num;
 while(i <= num)
  {
  r =1;
  while(r < i)
  {
      if(r*i==num)
		 printf("%d * %d = %d\n",i,r,i*r);
		 r++;
    }
	 i--;
  }
	 
return 0;
}
