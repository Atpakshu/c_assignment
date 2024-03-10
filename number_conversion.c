// question 2: Write a program to accept a number and print the number in character, decimal, octal and hex format


#include<stdio.h>
int main()
  {

    int n;
    printf("Enter a number(Decimal):");
    scanf("%d",&n);

	printf("Octal number is %d(Decimal) : %o\n",n,n);
    
	printf("Hexadecimal number is %d(Decimal): %x\n",n,n);

	printf("Character  number is %d(Decimal): %c\n",n,n);
     
	return 0;

   }

