//Write a program to display number of days in the given month and year using switch case statement.

#include<stdio.h>
int main()
{
  int month,year,days;
  printf("Enter a year : \n");
  scanf("%d",&year);

  printf("Enter a month : \n");
  scanf("%d",&month);

  switch(month)
  {

     case 2 : if((month == 2 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
	      printf("leap year with 29 days.....");
		  else
		  printf("28 days present...");
          break;

	case 1:	case 3:	case 5:	case 7:case 8:	case 10: case 12:
	     printf("31 days present....");
         break;

   case 4: case 6: case 9: case 11:
       printf("30 days present....");
	   break;

   default :
       printf("invalid month...");
  }
return 0;
}



