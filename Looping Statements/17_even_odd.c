/*  Calculate 5 numbers from user and calculate number of even and odd using 
of while loop */

#include<stdio.h>
main()
{
	int i,num,even=0,odd=0;
	
	i=1;
	while(i<=5)
	{
		printf("\n Entre number : \n");
		scanf("%d",&num);
		
		if(num%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		i++;
	}
	printf("\n Even : %d \n",even);
	printf("\n Odd : %d \n",odd);
}
