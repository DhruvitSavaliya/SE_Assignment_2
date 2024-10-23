/*  Write a C program to input basic salary of an employee and calculate its 
Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%\   */

#include<stdio.h>
main()
{
	int bsalary;
	float HRA,DA;
	float gsalary;
	
	printf("\n Enter Basic Salary : \n");
	scanf("%d",&bsalary);
	
	if(bsalary<=10000)
	{
		HRA = bsalary * 20 /100;
		DA = bsalary * 80 /100;
		gsalary = bsalary + HRA + DA;
		printf("\n Gross Salary : %.2f \n",gsalary);
	}
	else if(bsalary<=20000)
	{
		HRA = bsalary * 25 /100;
		DA = bsalary * 90 /100;
		gsalary = bsalary + HRA + DA;
		printf("\n Gross Salary : %.2f \n",gsalary);
	}
	else if(bsalary>20000)
	{
		HRA = bsalary * 30 /100;
		DA = bsalary * 95 /100;
		gsalary = bsalary + HRA + DA;
		printf("\n Gross Salary : %.2f \n",gsalary);
	}
}
