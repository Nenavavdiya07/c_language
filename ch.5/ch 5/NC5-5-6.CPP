#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,mini;
	clrscr();

	printf("Enter a b and c:");
	scanf("%d%d%d",&a,&b,&c);

	mini=(a<b)
		?(a<c)
			?a
			:c
		:(b<c)
			?b
			:c;
	printf("mini value:%d\n\n",mini);

	(a<b)
		?(a<c)
			?printf("a is mini")
			:printf("c is mini")
		:(b<c)
			?printf("b is mini")
			:printf("a is mini");
	getch();

}