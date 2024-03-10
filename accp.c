// question 1 :  accept two numbers and perform addition , subtraction, multilpication
    #include<stdio.h>
    int main()
      {
	  
            int n1,n2,sum,diff,mul;

            printf("Enter two numbers : \n");
            scanf("%d\n %d",&n1,&n2);
            sum = n1+n2;
            printf("sum of these number is : %d \n",sum);
            diff = n1-n2;
            printf("difference of these number is : %d \n",diff);
            mul = n1*n2;
            printf("multiplication of these number is : %d \n",mul);







            long double  n1,n2,sum,diff,mul;
			printf("Enter two numbers : \n");
            scanf("%Lf\n %Lf",&n1,&n2);

           sum = n1+n2;
		   printf("sum of these number is :%Lf \n",sum);
		   diff = n1-n2;
		   printf("difference of these number is : %Lf \n",diff);
           mul = n1*n2;
           printf("multiplication of these number is : %Lf \n",mul);



         char c1,c2;
	 int sum,diff,mul;
	 printf("Enter two character : ");
	 scanf("%d \n %d",&c1,&c2);
	 sum = c1+c2;
	 printf("%s%d\n, sum is: c1+c2");

           return 0;
  }
         
