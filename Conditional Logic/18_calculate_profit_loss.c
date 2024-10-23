/*  Write a C program to calculate profit and loss on a transaction. */

#include<stdio.h>
main()
{
	int costprice,sellprice,profit,loss;
	
	printf("\n Enter Cost Price : \n");
	scanf("%d",&costprice);
	
	printf("\n Enter Selling Price : \n");
	scanf("%d",&sellprice);
	
	if(costprice<sellprice)
	{
		profit = sellprice - costprice; 
		printf("\n Profit = %d \n",profit);
	}
	else
	{
		loss = costprice-sellprice;
		printf("\n Loss = %d \n",loss);
	}
}
