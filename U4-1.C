//wap to display 1 to 10 using loop

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,j;

	clrscr();
	printf("\n Using For Loop \n");
	for(i=1;i<=10;i++)
	{
		printf(" %d",i);
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf(" %d",i*i);
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf(" %d",i*i*i);
	}

	printf("\n Using While Loop \n");
	j=1;
	while(j<=10)
	{
		printf(" %d",i);
		i++;
	}
	printf("\n");
	j=1;
	while(j<=10)
	{
		printf(" %d",i*i);
		i++;
	}
	printf("\n");
	j=1;
	while(j<=10)
	{
		printf(" %d",i*i*i);
		i++;
	}

	getch();
}