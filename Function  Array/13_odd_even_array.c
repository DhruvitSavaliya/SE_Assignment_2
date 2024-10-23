/*  WAP to accept 5 numbers from user and check entered number is even or odd 
using of array  */

#include<stdio.h>
main()
{
	int num[5],i,even,odd;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter number : \n");
		scanf("%d",&num[i]);
	}
	
	printf("\n Even --> \n");
	for(i=0;i<5;i++)
	{
		if(num[i]%2==0)
		{
			printf("\n %d \n",num[i]);
		}
	}
	
	printf("\n Odd --> \n");
	for(i=0;i<5;i++)
	{
		if(num[i]%2!=0)
		{
			printf("\n %d \n",num[i]);
		}
	}
}
