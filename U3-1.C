//wap to interchange two numbers without using third veriable
#include<stdio.h>
#include<conio.h>

void main ()

{
	int x,y;


	clrscr();

	printf("\n enter the value of x :");
	scanf("%d",&x);

	printf("\n enter the value of y :");
	scanf("%d",&y);

	if(x>y)
	{
		printf("\n value of x is Maximum");
	}
	else
	{
		printf("\n value of y is Maximum");
	}

	getch();

}
