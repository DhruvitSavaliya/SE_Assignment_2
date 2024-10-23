/* WAP of Addition, Subtraction, Multiplication and Division using Switch 
case.(Must Be Menu Driven)  */

#include<stdio.h>
main()
{
	int a,b,num;
	char choice;

    do
	{	
		printf("\n Enter first number : \n");
		scanf("%d",&a);
	
		printf("\n Enter second number : \n");
		scanf("%d",&b);
	
		printf("\n 1. Addition \n");
		printf("\n 2. Subtraction \n");
		printf("\n 3. Multiplication \n");
		printf("\n 4. Division \n");
	
		printf("\n Enter your choiche : \n");
		scanf("%d",&num);
		
		switch(num)
		{
			case 1 : printf("\n ADD = %d \n",a+b);
				     break;
			case 2 : printf("\n SUB = %d \n",a-b);
					 break;
			case 3 : printf("\n Mul = %d \n",a*b);
					 break;
			case 4 : printf("\n DIV = %d \n",a/b);
					 break;
		}
		
		printf("\n\n\t Do you want to continue? (y/n) : ");
		scanf(" %c",&choice);
		
	}while(choice=='y' || choice=='Y');
	
}
