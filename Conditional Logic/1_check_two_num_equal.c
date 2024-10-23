/* Write a C program to accept two integers and check whether they are equal 
or not   */

#include<stdio.h>
main()
{
	int a,b;
	
	printf("\nEnter first number : \n");
	scanf("%d",&a);
	
	printf("\nEnter second number : \n");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("\n Enter numbers are equal \n");
	}
	else
	{
		printf("\n Enter numbers are not equal \n");
	}
}
