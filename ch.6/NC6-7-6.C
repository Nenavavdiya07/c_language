#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,factorial=1;
	clrscr();

	printf("enter n: ");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		factorial*=i;
	}
	printf("%d ",factorial);
	getch();


}