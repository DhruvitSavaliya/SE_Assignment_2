/* Series Program:
	(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) */
	
#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("\n Enter N number \n");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf(" %d ",i*i);
		printf("+ ");
		i++;
	}
}
