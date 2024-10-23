/*  Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable  */

#include<stdio.h>
main()
{
	int a;
	int b;
	int c;
	
	printf("\nEnter first number : \n");
	scanf("%d",&a);
	printf("\nEnter second number : \n");
	scanf("%d",&b);
	
	printf("\nPrint two numbers : \n");
	printf("-------------------------");
	printf("\na = %d \n",a);
	printf("\nb = %d \n",b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\nswap 2 numbers with using 3rd variable \n");
	printf("--------------------------------------------------");
	printf("\na = %d \n",a);
	printf("\nb = %d \n",b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nswap 2 numbers without using 3rd variable \n");
	printf("--------------------------------------------------");
	printf("\na = %d \n",a);
	printf("\nb = %d \n",b);
}
