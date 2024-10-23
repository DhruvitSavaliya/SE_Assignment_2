/* C Program to Reverse a Number Using FOR Loop */

#include<stdio.h>
main()
{
	int num,digit,revers;
	
	printf("\n Enter any number : \n");
	scanf("%d",&num);
	
	while(num>0)
	{
		digit = num %10;
		revers = revers * 10 +digit;
		num /=10;
	}
	
	printf("\n Reverse numbers :  %d  \n",revers);
}
