/*  WAP to calculate swap 2 numbers with using of multiplication and division. */

#include<stdio.h>
main()
{
	int a = 10;
	int b = 15;
	
	printf("\nPrint two numbers : \n");
	printf("\na = %d\n",a);
	printf("\nb = %d\n",b);
	a = a * b;
	b = a / b;
	a = a / b;
	
	printf("\nswap 2 numbers with using of multiplication and division\n");
	printf("-----------------------------------------------------------------");
	printf("\na = %d \n",a);
	printf("\nb = %d \n",b);
	
}
