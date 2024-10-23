/*  Program of Armstrong Number in C Using For Loop & While Loop  */

/* 
#include<stdio.h>
main()
{
	int num,num1,digit,qube,sum=0;
	
	printf("\n Enter any number : \n");
	scanf("%d",&num);
	
	num1 = num;
	
	while(num>0)
	{
		digit = num % 10;
		qube = digit * digit * digit;
		
		sum = sum + qube;
		
		num /=10;
	}
	
	if(sum==num1)
	{
		printf("\n %d is Armstrong Number \n",num1);
	}
	else
	{
		printf("\n %d is not Armstrong Number \n",num1);
	}
}
*/

#include<stdio.h>
main()
{
	int i,num,num1,digit,qube,sum=0;
	
	printf("\n Enter any number : \n");
	scanf("%d",&num);
	
	num1=num;
	
	for(i=1;num>0;i++)
	{
		digit = num % 10;
		qube = digit * digit * digit;
		
		sum = sum + qube;
		
		num /=10;
	}
	
	if(sum==num1)
	{
		printf("\n %d is Armstrong Number \n",num1);	
	}
	else
	{
		printf("\n %d is not Armstrong Number \n",num1);
	}
}
