/*   WAP to perform Palindrome number using for loop and function   */

#include<stdio.h>

int palindrome(int);

main()
{
	int num;
	
	printf("\n Enter any number : \n");
	scanf("%d",&num);
	
	palindrome(num);
}

int palindrome(int n)
{
	int i,digit,num1,revers=0;
	
	num1=n;
	
	for(i=1;n>0;i++)
	{
		digit = n%10;
		revers = revers * 10 + digit;
		n /=10;
	}

	if(revers==num1)
	{
		printf("\n %d is Palindrome number \n",num1);
	}
	else
	{
		printf("\n %d is not Palindrome number \n",num1);
	}
}
