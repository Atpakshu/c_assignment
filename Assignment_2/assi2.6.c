/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).*/


#include <stdio.h>
int main() {
  int n, rev = 0, rem, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;

    
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    
    if (temp == rev)
	{
        printf("%d is a palindrome.", temp);
    }
	else
	{
        printf("%d is not a palindrome.", temp);
    }
    return 0;
}
