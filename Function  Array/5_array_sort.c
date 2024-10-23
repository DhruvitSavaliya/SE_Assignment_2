/*  WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice   */

#include<stdio.h>
main()
{
	int arr1[50];
	int arr2[50];
	int i,j,size,temp;
	char ch;
	
	printf("\n Enter size of Array : \n");
	scanf("%d",&size);
	
	printf("\n Enter First Array value : \n");
	for(i=0;i<size;i++)
	{
		printf("\n Enter Element : \n");
		scanf("%d",&arr1[i]);
	}
	
	printf("\n Entre Second Array value : \n");
	for(i=0;i<size;i++)
	{
		printf("\n Enter Element : \n");
		scanf("%d",&arr2[i]);
	}
	
	printf("\n Array1 ---------- \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	printf("\n Array2 ----------- \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr2[i]);
	}
	
	printf("\n");
	printf("\n Enter Your choiche ascending-a and descending-d \n");
	scanf(" %c",&ch);
	
	if(ch=='a')
	{
	
		for(i=0;i<size;i++)
		{
			for(j=0;j<size-i-1;j++)
			{
				if(arr1[j]>arr1[j+1])
				{
			    	temp = arr1[j];
					arr1[j] = arr1[j+1];
					arr1[j+1]=temp;	
				}
			}
		}

		for(i=0;i<size;i++)
		{
			for(j=0;j<size-i-1;j++)
			{
				if(arr2[j]>arr2[j+1])
				{
			    	temp = arr2[j];
					arr2[j] = arr2[j+1];
					arr2[j+1]=temp;	
				}
			}
		}
		
		printf("\n ascending \n");
		printf("\n---------------------------------------------\n");
	
		printf("\n");
		printf("\n After sort array1 --> \n");
		for(i=0;i<size;i++)
		{
			printf("%d ",arr1[i]);
		}
	
		printf("\n");
		printf("\n After sort array2 --> \n");
		for(i=0;i<size;i++)
		{
			printf("%d ",arr2[i]);
		}
	}
	
	if(ch=='d')
	{
	
		for(i=0;i<size;i++)
		{
			for(j=0;j<size-i-1;j++)
			{
				if(arr1[j]<arr1[j+1])
				{
			    	temp = arr1[j];
					arr1[j] = arr1[j+1];
					arr1[j+1]=temp;	
				}
			}
		}

		for(i=0;i<size;i++)
		{
			for(j=0;j<size-i-1;j++)
			{
				if(arr2[j]<arr2[j+1])
				{
			    	temp = arr2[j];
					arr2[j] = arr2[j+1];
					arr2[j+1]=temp;	
				}
			}
		}
		
		printf("\n descending \n");
		printf("\n---------------------------------------------\n");
	
		printf("\n");
		printf("\n After sort array1 --> \n");
		for(i=0;i<size;i++)
		{
			printf("%d ",arr1[i]);
		}
	
		printf("\n");
		printf("\n After sort array2 --> \n");
		for(i=0;i<size;i++)
		{
			printf("%d ",arr2[i]);
		}
	}
}
