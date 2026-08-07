//wap to interchange two numbers without using third veriable
#include<stdio.h>
#include<conio.h>

void main ()

{
	int x,y;


	clrscr();

	printf("enter the value of x :");
	scanf("%d",&x);

	printf("enter the value of y :");
	scanf("%d",&y);

	x=x+y;
	y=x-y;
	x=x-y;

	printf("\n interchange value of x  is : %d",x);
	printf("\n interchange value of y  is : %d",y);

	getch();

}
