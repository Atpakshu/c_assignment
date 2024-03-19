/*Write a program to develop a very simple version of the ''guess the magic number" game. The
program generates a random magic number between 1 and 1000. Ask user to guess the
number. If guess is correct then print message “congrats! You won.” if the guess is less than
magic number print the message ** left ** otherwise print the message ** right **. Repeat the
procedure till player give accurate guess. Give maximum 10 chances to user.
Note: generates the magic number using the standard random number generator rand( ), which
returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that
is 32,767 or larger). The rand( ) function requires the header <stdlib.h>.*/



#include <stdio.h>
#include <stdio.h>
#include <time.h>
   
   
int main()
{
 int random,num,i;
 char choice;
		
		printf("\n\n\nGUESS THE NUMBER GAME!!! (1-100)\n\nRULES:\n\t1)if guess no is less than ans you will see '**left**' \n\t2)if guess no. is greater than ans you will see '**right**'\n\t3)you will get 10 chance to guess\n\n");

		printf("\nNUMBER= ???\n\n");
 do
 {
 
       srand(time(0)); // let's set the seed with unix timestamp
       int n = rand();
      // printf("Pseudo-random number: %d\n", n);
		
		random=n%100;
	//	printf("%d\n",random);

	for(i=1;i<=10;i++)
	{
		printf("guess= ");
		scanf("%d",&num);

		if(num==random)
		{
			printf("\ncongrats you WON!\n");
			break;
		}

		else if(num<random)
		{
		printf("\t**Left**  %d chance left\n",10-i);
		}

		else
		{
		printf("\t**Right** %d chance left\n",10-i);
		}

	}
	if(i>10)
	printf("\n\nYOU LOOS THE GAME !!!\n\n");

	printf("\n\ndo you want to play it again !(y/n):");
	scanf("%*c%c",&choice);


 }while(choice !='n');





   return 0;
}
