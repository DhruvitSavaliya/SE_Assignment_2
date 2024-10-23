/*  Write a program in C to count the total number of alphabets, digits and special 
characters in a string. */

#include<stdio.h>
main()
{
	char str[20];
	int i,alpha=0,digit=0,splch=0;
	
	printf("\n Enter String : \n");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
            alpha++; 
        }
		else if (str[i] >= '0' && str[i] <= '9')
		{
            digit++; 
		}
		else
		{
            splch++;
        }
	}
	
	printf("\n total number of alphabets : %d \n",alpha);
	printf("\n total number of digits : %d \n",digit);
	printf("\n total number of special characters : %d \n",splch);
}
