#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,s,space=0;
	clrscr();
	for(i=1;i<=5;i--)
	{
		for(s=0;s>=0;s--)
		{
			printf(" ");
		}
		space--;
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}