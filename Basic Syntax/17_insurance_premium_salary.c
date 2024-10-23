/* Calculate person’s insurance premium based on salary */

#include<stdio.h>
main()
{
    int salary;
    float priemium;
	float rate = 5;
	
	printf("\nEnter your salary : \n");
	scanf("%d",&salary);
	
	priemium = salary * (rate / 100);
	
	printf("\nInsurance premium based on salary : %f\n",salary-priemium);
	
	
}
