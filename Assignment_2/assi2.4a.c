//Write a program to find maximum of two numbers using      a. If – else

#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter two numbers :\n ");
   scanf("%d %d",&a,&b);

   if(a>b)
   {
     printf(" maximum number is = %d \n",a);
   }
   else
   {
    printf(" maximum number is = %d \n",b);
   }

return 0;
}
