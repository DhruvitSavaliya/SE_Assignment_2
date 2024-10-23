/* Check Number Is Positive or Negative */

#include<stdio.h>
main()
{
	int num;
	
	printf("\n Enter Any Number : \n");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\n %d is positive \n",num);
	}
	else
	{
		printf("\n %d is negative \n",num);
	}
}
