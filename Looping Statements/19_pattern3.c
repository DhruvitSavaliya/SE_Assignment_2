/* Patterns: 
	     *
        * *
       * * *
      * * * *
     * * * * *
*/

#include<stdio.h>
main()
{
	int i,j,n,k;
	
	printf("\n Enter n number of line for pattern \n ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(k=n-i;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=(i*2)-1;j++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
