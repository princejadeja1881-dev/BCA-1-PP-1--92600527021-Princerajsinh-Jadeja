#include<conio.h>
#include<stdio.h>

void main()
{
	int n,n1=0,n2=1,s;
	clrscr();
	s=n1+n2;

	printf("\n enter value of n :");
	scanf("%d",&n);


	printf(" %d %d %d",n1,n2,s);
	while(s<=100)
{
	n1=n2;
	n2=s;
	s=n1+n2;
	printf(" %d",s);
}
	getch();
}