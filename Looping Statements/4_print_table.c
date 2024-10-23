/* WAP to print table up to given numbers  */

#include<stdio.h>
main()
{
	int i,num;
	
	printf("\n Enter any number : \n");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d \n",num,i,num*i);
	}
}
