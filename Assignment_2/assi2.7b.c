/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years  b. Using logical operators*/

#include<stdio.h>
int main()
{
   int year;
   printf("Enter the year :\n");
   scanf("%d",&year);

   if((year % 400 == 0 && year % 100 != 0) || (year % 4 == 0))
   {
    printf("Entered year is leap year %d\n",year);
   }
   else
   {
    printf("Entered year is not leap year %d\n",year);
   }

return 0;
}
