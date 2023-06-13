#include<stdio.h>

main()
{
	int n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	int a[n],i,b[i];
	int sum=0;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	
		
	
	}
	for(i=0;i<0;i++)
	{
		printf("a[%d]; %d\n",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter b[%d]: ",i,b[i]);
		
	}
	for(i=0;i<n;i++)
	{
		sum=a[i]+b[i];
		printf("%d",sum);
	}
	
	
	
}