/*Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5*/


#include <stdio.h>
 
int main()
{
  	int num ;
	int factor = 2;
	printf("Enter a number : \n");
	scanf("%d",&num);

	printf("%d =  ",num);

	while(num > 1)
	{
        if(num % factor == 0)
   	    {
	       printf("%d  ", factor);
	       num /= factor;
	     }
	     else
	     {
           factor++;
	     }
     }
	 return 0;
}


