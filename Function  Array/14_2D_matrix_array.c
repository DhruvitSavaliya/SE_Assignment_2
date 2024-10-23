/*  Perform 2D matrix array  */

#include<stdio.h>
main()
{
	int a[3][3],r,c;
	
	printf("\n");
	printf("\n Value from Matrix1 --> \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n enter value : \n");
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("\n");
	printf("\n Matrix1 --> \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
}
