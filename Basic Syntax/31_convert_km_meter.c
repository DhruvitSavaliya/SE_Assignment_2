/*  Convert kilometers into meters  */

#include<stdio.h>
main()
{
	int meter,km;
	
	printf("\nEnter kilometer : \n");
	scanf("%d",&km);
	
	meter = km * 1000;
	
	printf("\n Meter : %d\n",meter);
}
