/*print the following pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/


#include<stdio.h>
int main()
{
 int i,j;
 int rows =5;
 for(i = 0; i < rows; i++)
 {
  for(j = 0 ; j <= i; j++)
  {
     printf(" %d ", j+1 );
  }
  printf("\n");
 }

return 0;
}
