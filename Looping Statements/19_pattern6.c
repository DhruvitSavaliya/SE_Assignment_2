/* Patterns:  
     A
     A B
     A B C
     A B C D
     A B C D E
*/

#include<stdio.h>
main()
{
	int i,j,n,k;
	
	printf("\n Enter n number of line for pattern \n ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k = 'A';
		for(j=1;j<=i;j++)
		{
			printf("%c ",k);
			k++;			
		}
		printf("\n");
	}
}
