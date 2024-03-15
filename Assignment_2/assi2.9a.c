//Write a program to display number of days in the given month and year using  a. Using If else ladder.


#include<stdio.h>
int main()
{
  int month,year;
  printf("Enter a month : \n");
  scanf("%d",&month);

  printf("enter a year :\n");
  scanf("%d",&year);

  if(month == 1)
  {
  printf("month is jan\n");
  printf("31 days\n");
  }

  else if(month == 2)
  printf("month is feb\n");
  {
   if(year % 400 == 0)
   {
    if(year % 100 != 0)
	{
     if("year % 4 == 0");
	 {
      printf("leap year...29 days\n");
	 }
	 else
     printf("28 days\n");
	 }
   }
  }

  else if(month == 3)
  {
  printf("month is mar\n");
  printf("31 days\n");
  }

  else if(month == 4)
  {
   printf("month is apr\n");
   printf("30 days\n");
  }

  else if(month == 5)
  {
   printf("month is may\n");
   printf("31 days\n");
  }

  else if(month == 6)
  {
   printf("month is jun\n");
   printf("30 days\n");
  }

  else if(month == 7)
    {
     printf("month is july\n");
     printf("31 days\n");
    }

  else if(month == 8)
    {
     printf("month is aug\n");
     printf("31 days\n");
   }

  else if(month == 9)
    {
     printf("month is sept\n");
     printf("30 days\n");
   }

   else if(month == 10)
    {
     printf("month is oct\n");
     printf("31 days\n");
    }

   else if(month == 11)
    {
     printf("month is nov\n");
     printf("30 days\n");
    }

   else if(month == 12)
    {
     printf("month is dec\n");
     printf("31 days\n");
    }

return 0;
}
