/* Patterns:  
     1
     2 3
     4 5 6
     7 8 9 10 
     11 12 13 14
*/

#include<stdio.h>
main()
{
	int i,j,n,k=1;
	
	printf("\n Enter n number of line for pattern \n ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
