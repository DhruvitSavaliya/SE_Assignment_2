/* Series Program:  
		1 + 2 + 3 + 4 + 5 + ... + n  */

#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("\n Enter N number \n");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf(" %d ",i);
		printf("+ ");
		i++;
	}
}
