/*Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on x-axis , y-axis , origin*/


#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter values for x and y : \n");
  scanf("%d %d",&x,&y);


 if(x > 0 && y > 0)
  printf("point present in 1st quadrent \n ");
  else if(x < 0 && y > 0)
  printf("point present in 2nd quadrent \n");
  else if(x < 0 && y < 0)
  printf("point present in 3rd quadrent \n");
  else if(x > 0 && y < 0)
  printf("point present in 4th quadrent \n");
  else if(x > 0 && y == 0)
  printf("point present on positive x-axis\n");
  else if(x < 0 && y == 0)
  printf("point present on negative x-axis\n");
  else if(x == 0 && y > 0)
  printf("point present on positive y-axis\n");
  else if(x == 0 && y < 0)
  printf("point present on negative y-axis");
  else
  printf("point present on origin\n");
return 0;
}
