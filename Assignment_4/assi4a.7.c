//Write a function to print given number of terms of Fibonacci series.


#include<stdio.h>

void fabo(int num);

int main()
{

int num;

printf("enter number :");
scanf("%d",&num);

fabo(num);

return 0;
}



void fabo(int num)
{
	int a=0,b=1,next;
	for(int i=0;i<num;i++)
	{

		next=a+b;
		a=b;
		printf("%d ",a);
		b=next;

	}

return;
}
