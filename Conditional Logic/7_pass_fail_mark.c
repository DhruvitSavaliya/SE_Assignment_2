/* Accept marks from user and check pass or fail */

#include<stdio.h>
main()
{
	int mark;
	
	printf("\n Enter Your Mark : \n");
	scanf("%d",&mark);
	
	if(mark>30)
	{
		printf("\n Pass \n");
	}
	else
	{
		printf("\n Fail \n");
	}
}
