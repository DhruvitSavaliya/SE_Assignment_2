/* WAP to accept 5 numbers from user and display all numbers */

#include<stdio.h>
main()
{
	int i,num;
	
	for(i=1;i<=5;i++)
	{
		printf("\n Enter Number : \n");
		scanf("%d",&num);
		
	    printf("\n %d \n",num);
    }
}
