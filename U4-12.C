#include <stdio.h>
#include <conio.h>

void main()
{
	int n, digit, sum = 0;
	clrscr();

	printf("enter number : ");
	scanf("%d" , &n);

	while(n > 0)
	{
		digit = n % 10;
		sum = sum + digit;
		n = n / 10;
	}
	printf("sum of digits = %d" , sum);
	getch();
}