//Input a number and display whether number is Even or Odd


#include<stdio.h>
int main()
{
   int a;
   printf("Enter a number : \n");
   scanf("%d",&a);

   if(a%2 == 0)
   {
     printf("....Number is Even....");
   }
   else
   {
    printf("....Number is odd...");
   }

return 0;
}
