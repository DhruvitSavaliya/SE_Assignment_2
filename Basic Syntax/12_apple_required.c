/*  Accept number of students from user. I need to give 5 apples to each 
student. How many apples are required? */

#include<stdio.h>
main()
{
	int stud;
	
	printf("\nHow many student ? :");
	scanf("%d",&stud);
	
	int total = stud*5;
	
	printf("\n %d Apple are required\n ",total);
}
