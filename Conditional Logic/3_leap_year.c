/* WAP to check if the given year is a leap year or not. */

#include<stdio.h>
main()
{
	int year;
	
	printf("\n Enter Year : \n");
	scanf("%d",&year);
	
	if(year%4==0 && (year%100!=0 || year%400==0))
	{
		printf("\n is leap Year \n");
	}
	else
	{
		printf("\n is not leap Year \n");
	}
}
