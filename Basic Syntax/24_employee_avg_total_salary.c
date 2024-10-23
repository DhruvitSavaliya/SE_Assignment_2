/* .Accept 5 employees name and salary and count average and total salary */

#include<stdio.h>
main()
{
	char emp1[10];
	char emp2[10];
	char emp3[10];
	char emp4[10];
	char emp5[10];
	int salary1,salary2,salary3,salary4,salary5;
	float average;
	int totalsalary;
	
	printf("\nEnter 1 employee name : \n");
	scanf("%s",&emp1);
	printf("\nEnter 1 employee salary : \n");
	scanf("%d",&salary1);
	printf("\n---------------\n");
	
	printf("\nEnter 2 employee name : \n");
	scanf("%s",&emp2);
	printf("\nEnter 2 employee salary : \n");
	scanf("%d",&salary2);
	printf("\n---------------\n");
	
	printf("\nEnter 3 employee name : \n");
	scanf("%s",&emp3);
	printf("\nEnter 3 employee salary : \n");
	scanf("%d",&salary3);
	printf("\n---------------\n");
	
	printf("\nEnter 4 employee name : \n");
	scanf("%s",&emp4);
	printf("\nEnter 4 employee salary : \n");
	scanf("%d",&salary4);
	printf("\n---------------\n");
	
	printf("\nEnter 5 employee name : \n");
	scanf("%s",&emp5);
	printf("\nEnter 5 employee salary : \n");
	scanf("%d",&salary5);
	printf("\n---------------\n");
	
	average = (salary1+salary2+salary3+salary4+salary5)/5;
	printf("\nEmployees Average Salary is : %f\n",average);
	printf("\n---------------\n");
	
	totalsalary = salary1+salary2+salary3+salary4+salary5;
	printf("\nEmployees Total Salary is : %d\n",totalsalary);
	
	
}
