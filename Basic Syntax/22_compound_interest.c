/*  Calculate compound interest (Compound Interest formula: 
a. Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)t 
b. Compound Interest = Amount – P  */

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
