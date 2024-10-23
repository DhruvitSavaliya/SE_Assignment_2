/* WAP to accept the height of a person in centimeters and categorize the 
person according to their height.  */

#include<stdio.h>
main()
{
	int height;
	
	printf("\n Enter Your Height in centimeter : \n");
	scanf("%d",&height);
	
	if(height>170)
	{
		printf("\n Tall \n");
	}
	else if(height>150)
	{
		printf("\n Average \n");
	}
	else if(height<150)
	{
		printf("\n Short \n");
	}
}
