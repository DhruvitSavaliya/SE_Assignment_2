/*  WAP to show 
i. Monday to Sunday using switch case 
ii. Vowel or Consonant using switch case  */

/* 
#include<stdio.h>
main()
{
	int num;
	
	printf("\n Enter eny number from 1 to 7 : \n");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1: printf("\n Monday \n");
				break;
		
		case 2: printf("\n Tuesday \n");
				break;
		
		case 3: printf("\n Wednesday\n");
				break;
		
		case 4: printf("\n Thursday \n");
				break;
		
		case 5: printf("\n Friday \n");
				break;
		
		case 6: printf("\n Saturday \n");
				break;
		
		case 7: printf("\n Sunday");
	}
}
*/

#include<stdio.h>
main()
{
	int ch;
	
	printf("\n Enter any one character : \n");
	scanf("%c",&ch);
	
	printf("\n %c \n",ch);
}
