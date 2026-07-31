//wap todisplay simple interest

#include<stdio.h>
#include<conio.h>

void main()
{
	float pa,r,y,si;

	clrscr();

	printf("\n enter the principal amount:");
	scanf("%f",&pa);

	printf("\n enter rate of intrest:");
	scanf("%f",&r);

	printf("\n enter the no. of years:");
	scanf("%f",&y);

	si=pa*r*y/100;

	printf("\n ***********************");
	printf("\n pricipal amount : %.2f",pa);
	printf("\n pricipal amount : %.2f",r);
	printf("\n pricipal amount : %.2f",y);
	printf("\n ***********************");
	printf("\n simple interest is : %.2f",si);
	getch();


}

