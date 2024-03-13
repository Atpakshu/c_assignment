/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.c. Conditional operator*/

#include<stdio.h>
int main()
{
 int year;
 printf("Enter a year : \n");
 scanf("%d",&year);

 year = (year % 400 == 0) && (year % 100 != 0) || (year % 4 == 0) ? printf(" Entered year is leap year %d\n",year) : printf("Entered year is not leap year%d\n",year);
 
return 0;
}
