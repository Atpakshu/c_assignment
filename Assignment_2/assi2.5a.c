//Write a program to find maximum of three numbers using   a. If – else


#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three numbers : \n");
  scanf("%d %d %d",&a,&b,&c);
  
  if(a>b && a>c)
  {
    printf(" maximum number is = %d \n",a);
  }
  else if(b>a && b>c)
  {
   printf("maximum number is = %d \n",b);
  }
  else
  {
   printf("maximum number is = %d \n",c);
  }

return 0;
}
