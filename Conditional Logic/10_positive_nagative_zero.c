/*  WAP to check whether a number is negative, positive or zero.  */

#include<stdio.h>
main()
{
	int num;
	
	printf("\n Enter Any Number : \n");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("\n %d is zero \n",num);
	}
	else if(num>0)
	{
		printf("\n %d is positive \n",num);
	}
	else
	{
		printf("\n %d is nagative \n",num);
	}
}
