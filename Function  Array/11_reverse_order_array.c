/*  WAP to accept 5 numbers from user and display in reverse order using for 
loop and array  */

#include<stdio.h>
main()
{
	int arr[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter value : \n");
		scanf("%d",&arr[i]);
	}
	
	for(i=4;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
