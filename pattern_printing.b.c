/* Write a program to print following pattern
b. Using single printf statement
*
**
***
****
*****
*/

#include<stdio.h>
int main()
{
  int i,j,num;
  printf("Enter value of num = ");
  scanf("%d",&num);
  for(i=0;i<=num;i++)
  {
    for(j=0;j<i;j++)
	{
      printf("* ");
    }
     printf("\n");
   }
return 0;
}
