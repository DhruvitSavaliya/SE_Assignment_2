/* Accept 5 expense from user and find average of expense  */

#include<stdio.h>
main()
{
	int expense1,expense2,expense3,expense4,expense5;
	float average;
	
	printf("\nEnter 1 Expense value : \n");
	scanf("%d",&expense1);
	printf("\n-------------------\n");
	
	printf("\nEnter 2 Expense value : \n");
	scanf("%d",&expense2);
	printf("\n-------------------\n");
	
	printf("\nEnter 3 Expense value : \n");
	scanf("%d",&expense3);
	printf("\n-------------------\n");
	
	printf("\nEnter 4 Expense value : \n");
	scanf("%d",&expense4);
	printf("\n-------------------\n");
	
	printf("\nEnter 5 Expense value : \n");
	scanf("%d",&expense5);
	printf("\n-------------------\n");
	
	average = (expense1+expense2+expense3+expense4+expense5)/5;
	printf("\nAll Expenses Average : %f",average);
}
