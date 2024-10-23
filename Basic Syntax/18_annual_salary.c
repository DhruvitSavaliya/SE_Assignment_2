/*  Calculate person’s Annual salary */

#include<stdio.h>
main()
{
	int salary;
	int annual;
	
	printf("\nEnter your Monthly salary : \n");
	scanf("%d",&salary);
	
	annual = salary * 12;
	printf("\n Annual salary : %d \n",annual);
	
	printf("\nEnter your Weekly Salary : \n");
	scanf("%d",&salary);
	
	annual = salary *52;
	printf("\n Annual salary : %d \n",annual);
}
