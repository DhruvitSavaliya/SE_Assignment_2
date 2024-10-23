/* Convert temperature Fahrenheit to Celsius  */

#include<stdio.h>
main()
{
	double f,c;
	
	printf("\nEnter Fahrenheit : \n");
	scanf("%lf",&f);
	
	c = (5.0/9.0)*(f-32);
	
	printf("\nCelsius : %lf",c);
}
