/* WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there 
b. How many odd numbers are there 
c. Sum of even numbers 
d. Sum of odd numbers  */

#include<stdio.h>
main()
{
	int i,even=0,odd=0,num,sum1=0,sum2=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\n Enter any 10 numbers : \n");
		scanf("%d",&num);
		
		if(num%2==0)
		{
			even++;
			sum1=sum1+num;
		}
		else
		{
			odd++;
			sum2=sum2+num;
		}
	}
	
	printf("\n %d - Even numbers. \n",even);
	printf("\n Sum of even numbers : %d \n",sum1);
	
	printf("\n %d - odd numbers. \n",odd);
	printf("\n Sum of Odd numbers : %d \n",sum2);
	
}
