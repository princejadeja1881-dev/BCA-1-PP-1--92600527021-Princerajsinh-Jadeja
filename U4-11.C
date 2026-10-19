#include<stdio.h>
#include<conio.h>

void main()
{

	int x,y,i,power=1;
	clrscr();

	printf("\n enter number:");
	scanf("%d",&x);

	printf("\n enter number:");
	scanf("%d",&y);

	for(i=1;i<=y;i++)
	{
		power*=x;
	}

	printf("Result:%d",power);
	getch

