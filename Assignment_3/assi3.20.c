/*Write a program to display
a. Prime numbers between 1 to 100
*/


#include<stdio.h>
int main()
{
	int flag=0,j,num=100;
	
	for(int i=2;i<num;i++)
	{
	
		for(j = 2 ;j < i ; j ++)
		{

			if(i % j == 0)
			flag=1;

		}
	
		if(flag==0 || (i==2 && flag==1))
		printf("%d ",i);

		flag=0;
	}
printf("\n");
return 0;
}
