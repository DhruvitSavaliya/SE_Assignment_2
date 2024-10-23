/* Convert minutes into seconds and hours */

#include<stdio.h>
main()
{
	int minute,second;
	float hours;
	
	printf("\nEnter Number Of Minutes : \n");
	scanf("%d",&minute);
	
	second = minute * 60;
	
	hours = minute / 60.0;
	
	printf("\n Seconds : %d\n",second);
	printf("\n Hours : %.2f\n",hours);
}
