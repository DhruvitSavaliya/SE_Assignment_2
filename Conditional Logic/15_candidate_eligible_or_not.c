/* Write a C program to determine eligibility for admission to a professional 
course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 -------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.  */

#include<stdio.h>
main()
{
	int math,phy,chem,total1,total2;
	
	printf("\nEnter Marks of math : \n");
	scanf("%d",&math);
	
	printf("\nEnter Marks of physics : \n");
	scanf("%d",&phy);
	
	printf("\nEnter Marks of chemistry : \n");
	scanf("%d",&chem);
	
	total1 = math+phy+chem;
	printf("\nTotal in all three subject : %d \n",total1);
	
	total2 = math+phy;
	printf("\nTotal in Maths and Physics : %d \n",total2);
	
	if(math>=65 && phy>=55 && chem>=50 && total1>=190 && total2>=140)
	{
		printf("\n The candidate is eligible. \n");
	}
	else
	{
		printf("\n The candidate is not eligible. \n");
	}
}
