/* WAP to find factorial using recursion    */

#include<stdio.h>

int factorial(int);

main()
{
	int n,f;
	
	printf("\n Enter any number : \n");
	scanf("%d",&n);
	
	f = factorial(n);
	
	printf("\n Factorial = %d \n",f);	
}

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
