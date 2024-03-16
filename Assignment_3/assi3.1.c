/*Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******
*/

#include <stdio.h>
void print_character(char character, int number)
{
   int i =0;
  while(i < number)
	{
        printf("%c", character);
		i++;
	}
    printf("\n");
}
int main()
{
    char ch;
    int num;

    printf("Character: ");
    scanf(" %c", &ch);
    printf("Number: ");
    scanf("%d", &num);    
    print_character(ch, num);
	return 0;
}
