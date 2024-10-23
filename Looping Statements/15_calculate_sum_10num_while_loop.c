/* Calculate sum of 10 numbers using of while loop */

#include<stdio.h>
main()
{
	int i,num,sum=0;
	
	i=1;
	while(i<=10)
	{
		printf("Enter any numbers : \n");
		scanf("%d",&num);
		
		sum=sum+num;
		i++;
	}
	printf("\n Sum = %d \n",sum);
}
