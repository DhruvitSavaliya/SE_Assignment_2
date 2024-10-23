/* Convert years into days and months */

#include<stdio.h>
main()
{
	int year,day,month;
	
	printf("\nEnter Number of Years : \n");
	scanf("%d",&year);
	
	day = year * 365;
	
	month = year * 12;
	
	printf("\n Months : %d\n",month);
	printf("\n Day : %d\n",day);
}
