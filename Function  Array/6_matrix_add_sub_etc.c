/* WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array   */

#include<stdio.h>
main()
{
	int a[3][3], b[3][3],mul[3][3], r,c,k;
	
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
	printf("\n Value from Matrix2 --> \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n enter value : \n");
			scanf("%d",&b[r][c]);
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
	
	printf("\n");
	printf("\n Matrix2 --> \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",b[r][c]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n Addition of Tow Matrix --> \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",a[r][c]+b[r][c]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n Subtraction of Tow Matrix --> \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",a[r][c]-b[r][c]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n multiplication of Tow Matrix --> \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			mul[r][c]=0;
			for(k=0;k<3;k++)
			{
				mul[r][c] = mul[r][c] + (a[r][k]*b[k][c]);
			}
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",mul[r][c]);
		}
		printf("\n");
	}
}
