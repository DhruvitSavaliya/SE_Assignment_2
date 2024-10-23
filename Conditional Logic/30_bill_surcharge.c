/*  If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the 
minimum bill should be of Rs. 256/- */

#include<stdio.h>
main()
{
	int bill,surcharge,totalbill,minbill=256;
	
	printf("\n Enter your Bill value : \n");
	scanf("%d",&bill);
	
	if(bill<minbill)
	{
		printf("\n Total Bill : %d \n",minbill);
	}
	else
	{
		surcharge = bill * 18/100;
		totalbill = bill + surcharge;	
		printf("\n Total Bill : %d \n",totalbill);
	}
}
