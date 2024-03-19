/*Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
within the range.
Input: 3 6
Output:

3  4  5   6
6  8  10 12        
9  12 15 18
12 16 20 24
15 20 25 30
18 24 30 36
21 28 35 41
24 32 40 48
27 36 45 54
30 40 50 60
*/


#include<stdio.h>
int main()
{
 int num1,num2,j ,i,res;
 printf("Enter the range you wish to print (num1,num2) : ");
 scanf("%d %d",&num1,&num2);
 for(j=num1 ; j <=num2 ; j++)
 {
 for(i =1 ; i <= 10 ; i++)
 {
   res = j * i;
   printf("Table of given entered number is : %d\n",res);
 }
 printf("\n");
}
return 0;
}
