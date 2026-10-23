#include <stdio.h>
#include <conio.h>

void main()
{

	int n, original, digit, reverse = 0;
	clrscr();

	printf("enter number : ");
	scanf("%", &n);
	original = n;

	while(n > 0)
	{
		digit = n %10;
		reverse = reverse * 10 + digit;
		n = n / 10;
	}
	if(original == reverse)
		printf("number is palindrome");
	else
		printf("number is not palindrome");
	getch();
}