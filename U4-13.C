#include <stdio.h>
#include <conio.h>

void main()
{
	int n, digit, reverse = 0;
	clrscr();

	printf("enter number : ");
	scanf("%d" , &n);

	while(n > 0)
	{
		digit = n % 10;
		reverse = reverse * 10 + digit;
		n = n / 10;
	}
	printf("reverse of digits = %d" , reverse);
	getch();
}