/*  Store 5 numbers in array and sort it in ascending order  */

#include<stdio.h>
main()
{
	int arr1[5];
	int i,j,temp;
	
	printf("\n Enter Array value : \n");
	for(i=0;i<5;i++)
	{
		printf("\n Enter Element : \n");
		scanf("%d",&arr1[i]);
	}
	
	printf("\n Array1 ---------- \n");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(arr1[j]>arr1[j+1])
			{
		    	temp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1]=temp;	
			}
		}
	}
	
	printf("\n ascending \n");
	printf("\n---------------------------------------------\n");
	
	printf("\n After sort array --> \n");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr1[i]);
	}
	
}
