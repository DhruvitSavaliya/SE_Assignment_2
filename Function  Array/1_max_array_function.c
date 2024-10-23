/* Write a program to find out the max number from given array using function  */

#include<stdio.h>

void max();

main()
{
	max();
}

void max()
{
	int arr[50];
	int n,i,max,min;
	
	printf("\n How many enter elements : \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter Element : \n");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nElement : %d \n",arr[i]);
	}
	
	max = 1;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max = arr[i];
		}
	}
	printf("\n MAX = %d \n",max);
}

