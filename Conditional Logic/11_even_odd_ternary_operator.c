/*  WAP to find number is even or odd using ternary operator  */

#include<stdio.h>
main()
{
	int num;
	
	printf("\n Enter Any Number : \n");
	scanf("%d",&num);
	
	num%2==0?printf("\n %d even \n",num):printf("\n %d odd \n",num);
}
