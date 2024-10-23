/* Accept 5 numbers from user and find those numbers factorials */

#include<stdio.h>
main()
{
	int i,j,num,fact=1;
	
    for(i=1;i<=5;i++)
    {
    	printf("\n Enter Any number : \n");
    	scanf("%d",&num);
    	fact =1;
    	for(j=1;j<=num;j++)
    	{
    		fact=fact*j;
		}
    	printf("\n Factorial : %d \n",fact);
	}
}
