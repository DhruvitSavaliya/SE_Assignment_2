/* Write a program in C to read any Month Number in integer and display the 
number of days for this month. */

#include<stdio.h>
main()
{
	int month;
	
	printf("\n Enter Month Number : \n");
	scanf("%d",&month);
	
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		printf("\n 31  days for this month ");
	}
	else if(month==2)
	{
		printf("\n 28  days for this month");
	}
	else
	{
		printf("\n 30  days for this month");
	}
}
