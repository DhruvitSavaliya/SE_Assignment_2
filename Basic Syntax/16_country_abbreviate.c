/* Convert country’s name in abbreviate form  */

#include<stdio.h>
main()
{
	char ch[30] = "United States of America";
	
	printf("\n%s\n",ch);
	
	printf("\nCountry name in abbreviate : %c%c%c\n",ch[0],ch[7],ch[17]);
}
