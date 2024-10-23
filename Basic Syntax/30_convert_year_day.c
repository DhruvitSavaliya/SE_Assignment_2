/* WAP to convert years into days and days into years */

#include<stdio.h>
main()
{
	float year,day;
	
	printf("\nEnter Number of Years : \n");
	scanf("%f",&year);
	
	day = year * 365;
	
	printf("\nDay : %.2f\n",day);
	
	year = day / 365;
	
	printf("\nYears : %.2f\n",year);
}
