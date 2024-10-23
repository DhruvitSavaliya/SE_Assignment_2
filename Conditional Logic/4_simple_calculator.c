/*  WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement  */

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n Enter First number : \n");
	scanf("%d",&a);
	
	printf("\n Enter Second number : \n");
	scanf("%d",&b);
	
	printf("\n 1. Addition \n");
	printf("\n 2. Subtraction \n");
	printf("\n 3. Multiplication \n");
	printf("\n 4. Division \n");
	printf("\n 5. Modulo \n");
	
	printf("\n Enter Any Choich : \n");
	scanf("%d",&c);
	
	if(c==1)
	{
		printf("\n Add = %d \n",a+b);
	}
	else if(c==2)
	{
		printf("\n Sub = %d \n",a-b);
	}
	else if(c==3)
	{
		printf("\n Mul = %d \n",a*b);
	}
	else if(c==4)
	{
		printf("\n Div = %d \n",a/b);
	}
	else if(c==5)
	{
		printf("\n Modulo = %d \n",a%b);
	}
	else
	{
		printf("\n Plese Enter valid choich \n");
	}
}
