/* Accept 3 numbers from user using while loop and check each numbers 
palindrome */

#include<stdio.h>
main()
{
	int num,digit,num1,revers;
	
	printf("\n Enter any number \n");
	scanf("%d",&num);
	
	num1=num;
	
	while(num>0)
	{
		digit = num%10;
		revers = revers * 10 + digit;
		num /=10;
	}
	
	if(num1==revers)
	{
		printf("\n %d number is palindrome \n ",num1);
	}
	else
	{
		printf("\n %d number is not palindrome \n",num1);
	}
}
