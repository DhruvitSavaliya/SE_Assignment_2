 /* Accept 5 numbers from user and perform sum of array  */
 
#include<stdio.h>
main()
{
	int arr[5],i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter number : \n");
		scanf("%d",&arr[i]);
	}
	
	printf("\n Array --> \n");
	for(i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
		sum += arr[i];
	}
	printf("\n");
	printf("\n Sum Of Array : %d \n",sum);
}
