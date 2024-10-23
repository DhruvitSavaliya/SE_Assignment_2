/* calculate the Factorial of a Given Number using while loop */

#include<stdio.h>
main()
{
   int i,num,fact=1;
   
   printf("\n Enter any number : \n");
   scanf("%d",&num);
   
   i=1;
   while(i<=num)
   {
   	    fact = fact * i;
   	    i++;
	}
	printf("\n Factorial : %d \n",fact);	
}
