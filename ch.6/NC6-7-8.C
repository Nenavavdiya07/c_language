#include<stdio.h>
#include<conio.h>

main()
{
	int n,i;
	clrscr();

	printf("enter number ");
	scanf("%d",&n);

	for (i=1;i<=10;i++)
	{
		printf("%d\t*\t%d=\t%d\n",n,i,n*i);
	}

	getch();


}