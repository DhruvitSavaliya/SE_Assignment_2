/* Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5) */

#include<stdio.h>
main()
{
	int num,digit,sum=0;
	
	printf("\n Enter any number : \n");
	scanf("%d",&num);
	
	digit = num % 10;
	
	while(num>10)
	{
		num = num /10;
	}
	
	sum = digit + num;
	
	printf("\n SUM = %d \n",sum);
	
}
