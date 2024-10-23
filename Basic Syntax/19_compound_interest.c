/* Calculate compound interest */

#include<stdio.h>
main()
{
	int p;
	float r = 5;
	int t = 5;
	float amount;
	
	printf("\nEnter price : \n");
	scanf("%d",&p);
	
	amount = p*(1+r/100)*t;
	
	printf("\nCompound interest : %.3f \n",amount-p);
}
