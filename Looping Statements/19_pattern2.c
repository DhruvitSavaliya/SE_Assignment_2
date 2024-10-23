/* Patterns:  
     A
     B C
     D E F 
     G H I J 
     K L M N O
*/

#include<stdio.h>
main()
{
	int i,j,n,k='A';
	
	printf("\n Enter n number of line for pattern \n ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
}
