/* WAP to find the largest of three numbers. */

#include<stdio.h>
main()
{
	int a,b,c,max;
	
	printf("\nEnter First number : \n");
	scanf("%d",&a);
	
	printf("\nEnter Second number : \n");
	scanf("%d",&b);
	
	printf("\nEnter third number : \n");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			max = a;
		}
		else
		{
			max = c;
		}
	}
	else if(b>c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	
	printf("\n largest number = %d \n ",max);
}
