/* WAP to print Fibonacci series up to given numbers  */

#include<stdio.h>
main()
{
	int i,num,a,b,c,temp;
	
	printf("\n Enter any number : \n");
	scanf("%d",&num);
	
	a = 0;
	b = 1;
	
	for(i=1;i<=num;i++)
	{
		c = a+b;
		
		temp = a;
		a = b;
		b = c;
		
		printf("%d  ",c);
	}
}
