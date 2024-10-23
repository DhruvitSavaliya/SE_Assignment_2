/*  Write a program in C to extract a substring from a given string  */

#include<stdio.h>
main()
{
	char str[50],substr[50];
	int pos,l,c=0;
	
	printf("\n Enter String : \n");
	gets(str);
	
	printf("\n Input the position to start extraction : \n");
    scanf("%d", &pos);
    
    printf("\n Input the length of substring : \n");
    scanf("%d", &l);
    
    while (c < l) {
        substr[c] = str[pos + c]; 
        c++;
    }
    
    substr[c] = '\0'; 

    printf("\n The substring :  %s \n", substr);
}
