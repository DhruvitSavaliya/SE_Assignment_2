/* Series Program:
	(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)  */

#include<stdio.h>
main()
{
	int i,sum=0,num;
	
	printf("\n Enter any number : \n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum = sum + i;
		printf("%d ",sum);
		printf(" + ");
	}
	
}
