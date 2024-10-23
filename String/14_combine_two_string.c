/* Write a program in C to combine two strings manually  */

#include<stdio.h>
main()
{
	char str1[10],str2[10];
	
	printf("\n Enter First String : \n");
	scanf("%s",&str1);
	
	printf("\n Enter Second String : \n");
	scanf("%s",&str2);
	
	strcat(str1, str2);
	
	printf("\n Combine Two String : %s \n",str1);
}
