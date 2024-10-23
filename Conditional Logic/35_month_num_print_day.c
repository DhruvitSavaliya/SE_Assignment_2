/*  Accept the input month number and print number of days in that 
month. */

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
		printf("\n 28-29  days for this month");
	}
	else if(month==4 || month==6 || month==9 || month==11)
	{
		printf("\n 30  days for this month");
	}
	else
	{
		printf("\n Enter Valid Month Number . \n");
	}
}
