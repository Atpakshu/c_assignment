//Write a program to crate four function calculator. Four functions are +, - , *, /

#include<stdio.h>
int main()
{
    int a,b,sum,sub,div,mul;
	char opr;
    printf("Enter two numbers and opr: ");
	scanf("%d %d %c",&a,&b,&opr);

  switch(opr)
  {
  case '+':
       printf("addition of two number is : %d\n",sum = a + b);
	   break;

  case	'-':
     printf("subtraction of two number is : %d\n",sub = a - b);
     break;

  case '*':
     printf("multiplication of two number is : %d\n",mul = a * b);
     break;

  case '/':
     printf("division of two number is : %d\n",div = a / b);
     break;

   default :
      printf("invlid operator");
	  
      
  }
  
return 0;
}
