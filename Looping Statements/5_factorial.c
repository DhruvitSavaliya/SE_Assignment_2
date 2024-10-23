/* WAP to print factorial of given number  */

#include<stdio.h>
main()
{
	int i,fact=1,num;
	
	printf("\n Enter any number : \n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact= fact*i;
	}
	
	printf("\n factorial : %d \n",fact);
	
}
