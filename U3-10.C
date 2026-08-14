//Display ASCII code of input character
#include<conio.h>
#include<stdio.h>

void main()
{
	char x;
	clrscr();
	printf("\n enter any character  : ");
	scanf("%c",&x);

	printf("\n input character is : %c",x-32);
	printf("\n ASCII code is : %d",x-32);
	getch();
}
