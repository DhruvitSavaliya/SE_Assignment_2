/* Write a program in C to find the largest and smallest words in a string. */

#include<stdio.h>
#include<string.h>

main()
{
	char str[50],larg[50],small[50],word[50];
	int i=0,j=0,len,minlen=50,maxlen=0;
	
	printf("\n Enter Any String : \n");
	gets(str);
	
	strcat(str," ");
	
	for (i = 0; str[i] != '\0'; i++)
	{
        if (isspace(str[i])) 
		{
            word[j] = '\0'; 

            len = strlen(word);  

            if (len > 0)
			{
                if (len < minlen)
				{
                    minlen = len;
                    strcpy(small, word);  
                }

                if (len > maxlen)
				{
                    maxlen = len;
                    strcpy(larg, word);  
                }
            }
            j = 0;
			  
        } 
		else
		{
            word[j++] = str[i];  
        }
    }
    
    printf("\n Smallest word: %s \n", small);
    printf("\n Largest word: %s \n", larg);
}
