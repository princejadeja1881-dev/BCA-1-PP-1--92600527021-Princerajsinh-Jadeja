//wap to display only even number 2 to 20 using loop

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,j;

	clrscr();

	printf("\n Using For Loop \n");
	for(i=2;i<=20;i=i+2)
	{
		printf(" %d",i);
	}

	printf("\n Using While Loop \n");
	j=2;
	while(j<=20)
	{
		printf(" %d",j);
		j=j+2;
	}
	getch();
}