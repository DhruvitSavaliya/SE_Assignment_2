/* Write a program of structure employee that provides the following  
   b. Write a program of structure for five employee that 
provides the following information -print and display 
empno, empname, address andage   */

#include<stdio.h>

struct emp
{
	int empno;
	char empname[10];
	char empadd[20];
}e[5];
main()
{
	int i;
	
	for(i=0;i<5;i++)
	{
	
    	printf("\n Enter Employee Numbers : \n");
	 	scanf("%d",&e[i].empno);
	 
	 	printf("\n Enter Employee Name : \n");
	 	scanf("%s",&e[i].empname);
	 
	 	printf("\n Enter Employee Address : \n");
	 	scanf("%s",&e[i].empadd);
	 	
	}
	
	printf("\n");
	printf("------------------------------------------");
	printf("\n");
	
	for(i=0;i<5;i++)
	{ 
		printf("\n Eeployee %d -----> \n",i);
		printf("\n");
		printf("\n Employee No. : %d \n",e[i].empno);
		printf("\n Employee Name : %s \n",e[i].empname);
		printf("\n Employee Address : %s \n",e[i].empadd);
		printf("\n");	
	}
}
