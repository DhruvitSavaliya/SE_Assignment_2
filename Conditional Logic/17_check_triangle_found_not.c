/*  Write a C program to check whether a triangle can be formed with the given 
values for the angles.  */

#include<stdio.h>
main()
{
	int angle1,angle2,angle3;
	int sum;
	
	printf("\nEnter First angle value : \n");
	scanf("%d",&angle1);
	
	printf("\nEnter Second angle value : \n");
	scanf("%d",&angle2);
	
	printf("\nEnter Third angle value : \n");
	scanf("%d",&angle3);
	
	sum = angle1 + angle2 + angle3;
	
	if(angle1>0 && angle2>0 && angle3>0 && sum==180)
	{
		printf("\n Triangle can be found \n");
	}
	else
	{
		printf("\n Triangle cannot be found \n ");
	}
}
