#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,j;
	clrscr();

	printf("\n enter value of n : ");
	scanf("%d",&n);

	printf("\n using for loop \n");
	for(i=1;i<=n;i=i+2)
	{
		printf("%d ",i);

	}
	printf("\n using while loop \n");
	j=1;
	while(j<=n)
	{
		printf(" %d" ,j);
		j=j+2;
	}


	getch();
}