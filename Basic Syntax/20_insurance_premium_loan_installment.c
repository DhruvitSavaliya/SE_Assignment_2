/*  Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary.  */

#include<stdio.h>
main()
{
	int salary;
	int insurance;
	int loaninstallment;
	int totalsalary;
	
	printf("\nEnter your monthly salary : \n");
	scanf("%d",&salary);
	
	insurance = salary * 10/100;
	
	loaninstallment = salary * 10/100;
	
	totalsalary = salary - (insurance + loaninstallment);
	
	printf("\n Total salary : %d\n",totalsalary);
}
