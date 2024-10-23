/* Convert days into months  */

#include<stdio.h>
main()
{
	int day;
	float month;
	
	printf("\nEnter Number of Day : \n");
	scanf("%d",&day);
	
	month = day/30.0;
	
	printf("\n Month : %.2f\n",month);
}
