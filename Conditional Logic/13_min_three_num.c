/* WAP to find minimum number among 3 numbers using ternary operator */

#include<stdio.h>
main()
{
	int a,b,c,min;
	
	printf("\nEnter First number : \n");
	scanf("%d",&a);
	
	printf("\nEnter Second number : \n");
	scanf("%d",&b);
	
	printf("\nEnter third number : \n");
	scanf("%d",&c);
	
	min = a<b?a<c?a:c:b<c?b:c;
	
	printf("\n MAX = %d \n",min);
}
