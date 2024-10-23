/* Calculate the Sum of Natural Numbers Using the While Loop  */

#include<stdio.h>
main()
{
	int num,n,i,sum=0;
	
	printf("\n How many element : \n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n Enter number : \n");
		scanf("%d",&num);
		
		sum =sum+num;
		i++;
	}
	printf("\n Sum = %d \n",sum);
}
