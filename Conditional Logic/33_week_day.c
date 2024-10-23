/* WAP to input the week number and print week day */

#include<stdio.h>
main()
{
	int week;
	
	printf("\n Enter Week Number : \n");
	scanf("%d",&week);
	
	if(week==1)
	{
		printf("\n Monday \n ");
	}
	else if(week==2)
	{
		printf("\n Tuesday \n");
	}
	else if(week==3)
	{
		printf("\n Wednesday \n");
	}
	else if(week==4)
	{
		printf("\n Thursday \n");
	}
    else if(week==5)
	{
		printf("\n Friday \n");
	}
	else if(week==6)
	{
		printf("\n Saturday \n");
	}
	else if(week==7)
	{
		printf("\n Sunday \n");
	}
	else
	{
		printf("\n Enter Valid Week Numbers ");
	}
}
