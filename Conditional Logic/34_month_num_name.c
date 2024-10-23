/* Accept month number and display month name  */

#include<stdio.h>
main()
{
	int month;
	
	printf("\n Enter Month Number : \n");
	scanf("%d",&month);
	
	if(month==1)
	{
		printf("\n January \n");
	}
	else if(month==2)
	{
		printf("\n February  \n");
	}
	else if(month==3)
	{
		printf("\n March   \n");
	}
	else if(month==4)
	{
		printf("\n April   \n");
	}
	else if(month==5)
	{
		printf("\n May   \n");
	}
	else if(month==6)
	{
		printf("\n June   \n");
	}
	else if(month==7)
	{
		printf("\n July   \n");
	}
	else if(month==8)
	{
		printf("\n August   \n");
	}
	else if(month==9)
	{
		printf("\n September  \n");
	}
	else if(month==10)
	{
		printf("\n October  \n");
	}
	else if(month==11)
	{
		printf("\n November  \n");
	}
	else if(month==12)
	{
		printf("\n December  \n");
	}
	else
	{
		printf("\n Enter Valid Month Number \n");
	}
}
