/*  WAP to show difference between Structure and Union.  */


#include<stdio.h>

struct emp
{
	int empno;
	char empname[10];
	char empadd[20];
}e;
main()
{
     printf("\n Enter Employee Numbers : \n");
	 scanf("%d",&e.empno);
	 
	 printf("\n Enter Employee Name : \n");
	 scanf("%s",&e.empname);
	 
	 printf("\n Enter Employee Address : \n");
	 scanf("%s",&e.empadd);
	 
	 printf("\n Employee No. : %d \n",e.empno);
	 printf("\n Employee Name : %s \n",e.empname);
	 printf("\n Employee Address : %s \n",e.empadd);	
}

/*

#include<stdio.h>

union emp
{
	int empno;
	char empname[10];
	char empadd[20];
}e;
main()
{
     printf("\n Enter Employee Numbers : \n");
	 scanf("%d",&e.empno);
	 
	 printf("\n Enter Employee Name : \n");
	 scanf("%s",&e.empname);
	 
	 printf("\n Enter Employee Address : \n");
	 scanf("%s",&e.empadd);
	 
	 printf("\n Employee No. : %d \n",e.empno);
	 printf("\n Employee Name : %s \n",e.empname);
	 printf("\n Employee Address : %s \n",e.empadd);	
}
*/
