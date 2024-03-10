/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/


#include<stdio.h>
int main()
{
   int a ,b , div ;
   printf("Enter two numbers :\n ");
   scanf("%d %d",&a,&b);

   if(b == 0)
   {
    printf(".......divide by zero error....... ");
  }
  else
  {
   div = a / b;
   printf("division of these number is : %d\n ",div);
  }
return 0;
}
